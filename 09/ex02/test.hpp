#ifndef MERGE_INSERTION_SORT_HPP
# define MERGE_INSERTION_SORT_HPP

# include <algorithm>
# include <iostream>
# include <list>
# include <iterator>
# include <vector>
# include <stdint.h>


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


////////////////////////////////////////////////////////////
// Merge-insertion sort
template<class iterator, class T> bool compare_t( const T &lhs, const iterator &rhs)
{
	return (lhs < *rhs);
}

template<
    typename RandomAccessIterator,
    typename Compare
>
void merge_insertion_sort_impl(RandomAccessIterator first, RandomAccessIterator last, Compare compare)
{
	static int layer = 0;
	std::cout << "----------------------  " << layer << "  ----------------------" << std::endl;
	layer++;

    static const uint_least64_t jacobsthal_diff[] = {
        2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u,
        2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u,
        1398102u, 2796202u, 5592406u, 11184810u, 22369622u, 44739242u, 89478486u,
        178956970u, 357913942u, 715827882u, 1431655766u, 2863311530u, 5726623062u,
        11453246122u, 22906492246u, 45812984490u, 91625968982u, 183251937962u,
        366503875926u, 733007751850u, 1466015503702u, 2932031007402u, 5864062014806u,
        11728124029610u, 23456248059222u, 46912496118442u, 93824992236886u, 187649984473770u,
        375299968947542u, 750599937895082u, 1501199875790165u, 3002399751580331u,
        6004799503160661u, 12009599006321322u, 24019198012642644u, 48038396025285288u,
        96076792050570576u, 192153584101141152u, 384307168202282304u, 768614336404564608u,
        1537228672809129216u, 3074457345618258432u, 6148914691236516864u
    };

    using std::iter_swap;

    std::ptrdiff_t size = std::distance(first, last);
    if (size < 2) return;

    bool has_stray = (size % 2 != 0);
	if (has_stray == true)
		std::cout << "PAIR" << std::endl;
	else
		std::cout << "IMPAIR" << std::endl;

    ////////////////////////////////////////////////////////////
    // Group elements by pairs

    RandomAccessIterator end = has_stray ? --last : last;
    for (RandomAccessIterator it = first ; it != end ; it += 2)
    {
        if (compare(it[1], it[0]))
        {
			std::cout << it[1] << " &&& " << it[0] << std::endl;
            iter_swap(it, it + 1);
        }
    }
    for (RandomAccessIterator it = first ; it != end ; it++)
    {
		std::cout << *it << std::endl;
    }

    ////////////////////////////////////////////////////////////
    // Recursively sort the pairs by max

    merge_insertion_sort_impl(
        make_group_iterator(first, 2),
        make_group_iterator(end, 2),
        compare
    );
    ////////////////////////////////////////////////////////////
    // Separate main chain and pend elements

	std::list<RandomAccessIterator> chain;
	chain.push_back(first);
	chain.push_back(first + 1);


	std::vector<typename std::list<RandomAccessIterator>::iterator> pend;
	pend.reserve((size + 1) / 2 - 1);

    for (RandomAccessIterator it = first + 2 ; it != end ; it += 2)
    {
		std::cout << "BOUCLE " << *it << std::endl;
		chain.push_back(it);
    	typename std::list<RandomAccessIterator>::iterator tmp = chain.end();
   	 	tmp--;
    	pend.push_back(tmp);
    }

    if (has_stray)
    {
		pend.push_back(chain.end());
    }


	RandomAccessIterator current_it = first + 2;
    typename std::vector<typename std::list<RandomAccessIterator>::iterator>::iterator current_pend;
	current_pend = pend.begin();
	// std::cout << "PING  " << *current_it << std::endl;
	// std::cout << "PING  " << *(*(*(pend.begin()))) << std::endl;

	for (int k = 0;; ++k)
	{
		// typedef typename std::list<RandomAccessIterator>::difference_type list_diff_type;
		// typedef typename std::iterator_traits<RandomAccessIterator>::difference_type iterator_diff_type;

		// Find next index
		uint_fast64_t dist = jacobsthal_diff[k];
		if (dist > static_cast<uint_fast64_t>(std::distance(current_pend, pend.end())))
			break;

		RandomAccessIterator it = current_it;

		std::advance(it, dist * 2);
		typename std::vector<typename std::list<RandomAccessIterator>::iterator>::iterator pe = current_pend;
		// std::cout << "PING  " << *pe << std::endl;

		std::advance(pe, dist);

		do
		{
			--pe;
			it -= 2;

			typename std::list<RandomAccessIterator>::iterator insertion_point = std::upper_bound(
				chain.begin(), *pe, *it,
				compare_t<typename std::vector<typename std::list<RandomAccessIterator>::iterator>, unsigned int>
			);
			chain.insert(insertion_point, it);
		} while (pe != current_pend);

		std::advance(current_it, dist * 2);
		std::advance(current_pend, dist);
	}

	// If there are pend elements left, insert them into
	// the main chain, the order of insertion does not
	// matter so forward traversal is ok
	// while (current_pend != pend.end())
	// {
	// 	typename std::list<RandomAccessIterator>::iterator insertion_point = std::upper_bound(
	// 		chain.begin(), *current_pend, *current_it,
	// 		compare_t<typename std::vector<typename std::list<RandomAccessIterator>::iterator>::iterator, unsigned int>
	// 	);
	// 	chain.insert(insertion_point, current_it);
	// 	current_it += 2;
	// 	++current_pend;
	// }

    ////////////////////////////////////////////////////////////
    // Move values in order to a cache then back to origin

	// typedef typename std::iterator_traits<RandomAccessIterator>::value_type ValueType;
	// std::vector<ValueType> cache;
	// cache.reserve(size);

	// for (typename std::list<RandomAccessIterator>::iterator it = chain.begin(); it != chain.end(); ++it)
	// {
	// 	RandomAccessIterator begin = *it;
	// 	RandomAccessIterator end = begin;
	// 	std::advance(end, std::distance(begin, *it));
	// 	std::copy(begin, end, std::back_inserter(cache));
	// }
	// std::copy(cache.begin(), cache.end(), first.base());
}





#endif // MERGE_INSERTION_SORT_HPP
