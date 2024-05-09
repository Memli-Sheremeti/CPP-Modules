/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:04:03 by mshereme          #+#    #+#             */
/*   Updated: 2024/05/09 14:17:33 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <iterator>
# include <vector>
# include <stdint.h>
# include <sstream>
# include <istream>
# include <deque>


////////////////////////////////////////////////////////////
// Iterator used to sort views of the collection

template<typename Iterator>
class group_iterator
{
    private:

        Iterator _it;
        std::size_t _size;

    public:

        ////////////////////////////////////////////////////////////
        // Public types

        typedef std::random_access_iterator_tag iterator_category;
        typedef Iterator iterator_type;
        typedef typename std::iterator_traits<Iterator>::value_type value_type;
        typedef typename std::iterator_traits<Iterator>::difference_type difference_type;
        typedef typename std::iterator_traits<Iterator>::pointer pointer;
        typedef typename std::iterator_traits<Iterator>::reference reference;

        ////////////////////////////////////////////////////////////
        // Constructors

        group_iterator() : _size(0) {}

        group_iterator(Iterator it, std::size_t size):
            _it(it),
            _size(size)
        {}

        ////////////////////////////////////////////////////////////
        // Members access

		iterator_type base() const
        {
            return _it;
        }

        std::size_t size() const
        {
            return _size;
        }

        ////////////////////////////////////////////////////////////
        // Element access

        reference operator*() const
        {
            return _it[_size - 1];
        }

        pointer operator->() const
        {
            return &(operator*());
        }

        ////////////////////////////////////////////////////////////
        // Increment/decrement operators

        group_iterator& operator++()
        {
            _it += _size;
            return *this;
        }

        group_iterator operator++(int)
        {
            group_iterator tmp = *this;
            operator++();
            return tmp;
        }

        group_iterator& operator--()
        {
            _it -= _size;
            return *this;
        }

        group_iterator operator--(int)
        {
            group_iterator tmp = *this;
            operator--();
            return tmp;
        }

        group_iterator& operator+=(std::size_t increment)
        {
            _it += _size * increment;
            return *this;
        }

        group_iterator& operator-=(std::size_t increment)
        {
            _it -= _size * increment;
            return *this;
        }

        ////////////////////////////////////////////////////////////
        // Elements access operators

       value_type operator[](std::size_t pos)
        {
            return _it[pos * _size + _size - 1];
        }

       value_type operator[](std::size_t pos) const
        {
            return _it[pos * _size + _size - 1];
        }
};

template<typename Iterator>
void iter_swap(group_iterator<Iterator> lhs, group_iterator<Iterator> rhs)
{
    std::swap_ranges(lhs.base(), lhs.base() + lhs.size(), rhs.base());
}

////////////////////////////////////////////////////////////
// Comparison operators

template<typename Iterator>
bool operator==(const group_iterator<Iterator>& lhs,
                const group_iterator<Iterator>& rhs)
{
    return lhs.base() == rhs.base();
}

template<typename Iterator>
bool operator!=(const group_iterator<Iterator>& lhs,
                const group_iterator<Iterator>& rhs)
{
    return lhs.base() != rhs.base();
}

////////////////////////////////////////////////////////////
// Relational operators

template<typename Iterator>
bool operator<(const group_iterator<Iterator>& lhs,
               const group_iterator<Iterator>& rhs)
{
    return lhs.base() < rhs.base();
}

template<typename Iterator>
bool operator<=(const group_iterator<Iterator>& lhs,
                const group_iterator<Iterator>& rhs)
{
    return lhs.base() <= rhs.base();
}

template<typename Iterator>
bool operator>(const group_iterator<Iterator>& lhs,
               const group_iterator<Iterator>& rhs)
{
    return lhs.base() > rhs.base();
}

template<typename Iterator>
bool operator>=(const group_iterator<Iterator>& lhs,
                const group_iterator<Iterator>& rhs)
{
    return lhs.base >= rhs.base();
}

////////////////////////////////////////////////////////////
// Arithmetic operators

template<typename Iterator>
group_iterator<Iterator> operator+(group_iterator<Iterator> it, std::size_t size)
{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator+(std::size_t size, group_iterator<Iterator> it)
{
    return it += size;
}

template<typename Iterator>
group_iterator<Iterator> operator-(group_iterator<Iterator> it, std::size_t size)
{
    return it -= size;
}

template<typename Iterator>
typename group_iterator<Iterator>::difference_type operator-(const group_iterator<Iterator>& lhs, const group_iterator<Iterator>& rhs)
{
    return (lhs.base() - rhs.base()) / lhs.size();
}

////////////////////////////////////////////////////////////
// Construction function

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(Iterator it, std::size_t size)
{
    return group_iterator<Iterator>(it, size);
}

template<typename Iterator>
group_iterator<Iterator> make_group_iterator(group_iterator<Iterator> it, std::size_t size)
{
    return group_iterator<Iterator>(it.base(), size * it.size());
}



typedef group_iterator<std::vector<unsigned int>::iterator> RandomAccessIterator;

bool compare_t( unsigned int lhs, RandomAccessIterator rhs)
{
	// std::cout << " COMPARE_T " << std::endl;
	// std::cout << lhs << std::endl;
	// std::cout << *rhs << std::endl;
	return (lhs < *rhs);
}


void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last)
{
    static const unsigned int jacobsthal_diff[] = {
        2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366,
        2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050,
        1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486
    };

    using std::iter_swap;

    std::ptrdiff_t size = std::distance(first, last);
    if (size < 2) return;

    bool has_stray = (size % 2 != 0);
    ////////////////////////////////////////////////////////////
    // Group elements by pairs

    RandomAccessIterator end = has_stray ? (last - 1) : last;
    for (RandomAccessIterator it = first ; it != end ; it += 2)
    {
        if (it[1] < it[0])
        {
            iter_swap(it, it + 1);
        }
    }

    ////////////////////////////////////////////////////////////
    // Recursively sort the pairs by max

    merge_insertion_sort_impl(
        make_group_iterator(first, 2),
        make_group_iterator(end, 2)
    );

	// static int layer = 0;
	// std::cout << "----------------------  " << layer << "  ----------------------" << std::endl;
	// layer++;
    ////////////////////////////////////////////////////////////
    // Separate main chain and pend elements

	std::list<RandomAccessIterator> chain;

	chain.push_back(first);
	chain.push_back(first + 1);

	std::vector<std::list<RandomAccessIterator>::iterator> pend;
	pend.reserve((size + 1) / 2 - 1);

    for (RandomAccessIterator it = first + 2 ; it != end ; it += 2)
    {
    	std::list<RandomAccessIterator>::iterator tmp = chain.insert(chain.end(), it + 1);
    	pend.push_back(tmp);
    }
    if (has_stray)
    {
		pend.push_back(chain.end());
    }

	RandomAccessIterator current_it = first + 2;
    std::vector<std::list<RandomAccessIterator>::iterator>::iterator current_pend = pend.begin();

	for (int k = 0 ; ; ++k)
    {
        // Find next index
        unsigned int dist = jacobsthal_diff[k];
		// std::cout << "Dist = " << dist << " distance = " << std::distance(current_pend, pend.end()) << std::endl;
        if (dist > static_cast<unsigned int>(std::distance(current_pend, pend.end())))
			break;

        RandomAccessIterator it = current_it + (dist * 2);
		// std::cout << "CURRENT + dist = " << *it << std::endl;
        std::vector<std::list<RandomAccessIterator>::iterator>::iterator pe = current_pend + dist;

        do
        {
            --pe;
            it -= 2;

			// std::cout << "it == " << *it << " --------- pe == " << ***pe << std::endl;
           std::list<RandomAccessIterator>::iterator insertion_point = std::upper_bound(chain.begin(), *pe, *it, compare_t);
		//    std::cout << "ISER_POINT == " << **insertion_point << std::endl;
		   chain.insert(insertion_point, it);
        } while (pe != current_pend);

		std::advance(current_it, dist * 2);
        std::advance(current_pend, dist);
    }

	while (current_pend != pend.end())
    {
         std::list<RandomAccessIterator>::iterator insertion_point = std::upper_bound(chain.begin(), *current_pend, *current_it, compare_t);
        chain.insert(insertion_point, current_it);
        current_it += 2;
		++current_pend;
    }

    // // // ////////////////////////////////////////////////////////
    // // // Move values in order to a cache then back to origin
	std::vector<unsigned int> cache;
	cache.reserve(size);

	for (std::list<RandomAccessIterator>::iterator it = chain.begin(); it != chain.end(); it++)
	{
		std::vector<unsigned int>::iterator begin = (*it).base();
		std::vector<unsigned int>::iterator end = begin + (*it).size();
		std::copy(begin, end, std::back_inserter(cache));
	}
	std::copy(cache.begin(), cache.end(), first.base());
}


typedef group_iterator<std::deque<unsigned int>::iterator> Rdmi;

bool compare_l( unsigned int lhs, Rdmi rhs)
{
	// std::cout << " COMPARE_T " << std::endl;
	// std::cout << lhs << std::endl;
	// std::cout << *rhs << std::endl;
	return (lhs < *rhs);
}

void mgsl(Rdmi first, Rdmi last)
{
    static const unsigned int jacobsthal_diff[] = {
        2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366,
        2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050,
        1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486
    };

    using std::iter_swap;

    std::ptrdiff_t size = std::distance(first, last);
    if (size < 2) return;

    bool has_stray = (size % 2 != 0);
    ////////////////////////////////////////////////////////////
    // Group elements by pairs

    Rdmi end = has_stray ? (last - 1) : last;
    for (Rdmi it = first ; it != end ; it += 2)
    {
        if (it[1] < it[0])
        {
            iter_swap(it, it + 1);
        }
    }

    ////////////////////////////////////////////////////////////
    // Recursively sort the pairs by max

    mgsl( make_group_iterator(first, 2), make_group_iterator(end, 2));

	// static int layer = 0;
	// std::cout << "----------------------  " << layer << "  ----------------------" << std::endl;
	// layer++;
    ////////////////////////////////////////////////////////////
    // Separate main chain and pend elements

	std::list<Rdmi> chain;

	chain.push_back(first);
	chain.push_back(first + 1);

	std::vector<std::list<Rdmi>::iterator> pend;
	pend.reserve((size + 1) / 2 - 1);

    for (Rdmi it = first + 2 ; it != end ; it += 2)
    {
    	std::list<Rdmi>::iterator tmp = chain.insert(chain.end(), it + 1);
    	pend.push_back(tmp);
    }
    if (has_stray)
    {
		pend.push_back(chain.end());
    }

	Rdmi current_it = first + 2;
    std::vector<std::list<Rdmi>::iterator>::iterator current_pend = pend.begin();

	for (int k = 0 ; ; ++k)
    {
        // Find next index
        unsigned int dist = jacobsthal_diff[k];
		// std::cout << "Dist = " << dist << " distance = " << std::distance(current_pend, pend.end()) << std::endl;
        if (dist > static_cast<unsigned int>(std::distance(current_pend, pend.end())))
			break;

        Rdmi it = current_it + (dist * 2);
		// std::cout << "CURRENT + dist = " << *it << std::endl;
        std::vector<std::list<Rdmi>::iterator>::iterator pe = current_pend + dist;

        do
        {
            --pe;
            it -= 2;

			// std::cout << "it == " << *it << " --------- pe == " << ***pe << std::endl;
           std::list<Rdmi>::iterator insertion_point = std::upper_bound(chain.begin(), *pe, *it, compare_l);
		//    std::cout << "ISER_POINT == " << **insertion_point << std::endl;
		   chain.insert(insertion_point, it);
        } while (pe != current_pend);

		std::advance(current_it, dist * 2);
        std::advance(current_pend, dist);
    }

	while (current_pend != pend.end())
    {
         std::list<Rdmi>::iterator insertion_point = std::upper_bound(chain.begin(), *current_pend, *current_it, compare_l);
        chain.insert(insertion_point, current_it);
        current_it += 2;
		++current_pend;
    }

    // // // ////////////////////////////////////////////////////////
    // // // Move values in order to a cache then back to origin
	std::deque<unsigned int> cache;
	// cache.reserve(size);

	for (std::list<Rdmi>::iterator it = chain.begin(); it != chain.end(); it++)
	{
		std::deque<unsigned int>::iterator begin = (*it).base();
		std::deque<unsigned int>::iterator end = begin + (*it).size();
		std::copy(begin, end, std::back_inserter(cache));
	}
	std::copy(cache.begin(), cache.end(), first.base());
}

#endif
