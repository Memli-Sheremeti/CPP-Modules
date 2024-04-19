/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:53:11 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/19 09:14:43 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

	MutantStack(void) : std::stack<T>() {}
	~MutantStack ( void ) {}
	MutantStack( MutantStack const & obj ) : std::stack<T>(obj) {}
	MutantStack & operator=( const MutantStack  & obj ) { *this->c = obj.c; return (*this); };
	class iterator : public std::iterator<
								std::bidirectional_iterator_tag,
								T,
								std::ptrdiff_t,
								T *,
								T &
								>
	{
		private :

		T * m_ptr;

		public :

		iterator( void ) {}
		~iterator( void ) {}
		iterator( T* ptr) : m_ptr(ptr) {}
		T & operator*() const { return ( *m_ptr ); }
		T * operator->() { return ( m_ptr ); }
		iterator & operator++() { m_ptr--; return (*this); }
		iterator operator++( int ) { iterator old = *this; ++(*this); return (old); }

		iterator & operator--() { m_ptr++; return (*this); }
		iterator operator--( int ) { iterator old = *this; --(*this); return (old); }

		bool operator==(iterator& obj) { return ( m_ptr == obj.m_ptr ? true : false); };
		bool operator!=(iterator& obj) { return ( m_ptr != obj.m_ptr ? true : false); };

	};

	iterator begin() { return iterator( &this->c.back() ); };
	iterator end() { return iterator( &this->c.front() - 1 ); };
};

// template <typename T>
// MutantStack<T>::MutantStack( const MutantStack  & obj )
// {
// 	*this = obj;
// 	return ;
// }

// template <typename T>
// MutantStack<T> & MutantStack<T>::operator=( MutantStack const & obj )
// {
// 	if (this != &obj)
// 	{
// 		*this->c = obj.c;
// 	}
// 	return (*this);
// }

#endif
