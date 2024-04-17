/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 08:40:05 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 08:40:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *arr, size_t size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}

template <typename T>
void    iter(T *arr, size_t size, void (*f)(T const &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}


class Awesome
{
    public:
    
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    
    private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


#endif
