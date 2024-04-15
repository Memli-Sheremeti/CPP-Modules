/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 08:39:06 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 09:14:24 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T> class Array
{
    private :

	T *arr;
    unsigned int size;

    public :
    Array( void );
    Array( unsigned int n );
    ~Array( void );
    Array ( Array const & obj);
    Array & operator=( Array const & obj);

    T & operator[]( int index );

    class WrongArray : public std::exception
    {
        public :
        const char * what() const throw();
    };
};

template <typename T>
Array<T>::Array( unsigned int n)
{
    this->size = n;
    this->arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->arr[i] = 0;
    return ;
}

template <typename T>
Array<T>::Array( void )
{
    this->size = 0;
    this->arr = 0;
    return ;
}

template <typename T>
Array<T>::~Array( void )
{
    delete [] this->arr;
    return ;
}

template <typename T>
Array<T>::Array( Array const & obj)
{
	this->size = obj.size;
	this->arr = new T[obj.size];
	if (obj.arr)
	{
		for (unsigned int i = 0; i < obj.size; i++)
			this->arr[i] = obj.arr[i];
	}
	else
	{
		for (unsigned int i = 0; i < obj.size; i++)
			this->arr[i] = 0;
	}
	return ;
}

template <typename T>
Array<T> & Array<T>::operator=( Array const & obj)
{
	if (this != &obj)
	{
		if (this->arr)
			delete this->arr;
		this->size = obj.size;
		this->arr = new T[obj.size];
		if (obj.arr)
		{
			for (unsigned int i = 0; i < obj.size; i++)
				this->arr[i] = obj.arr[i];
		}
		else
		{
			for (unsigned int i = 0; i < obj.size; i++)
				this->arr[i] = 0;
		}
	}
    return (*this);
}

template <typename T>
T & Array<T>::operator[]( int index )
{
	if (index < 0 || (unsigned int) index >= this->size || this->arr == 0)
		throw Array<T>::WrongArray();
	return (this->arr[index]);
}


template <typename T>
const char* Array<T>::WrongArray::what( void ) const throw()
{
    return ("Error with for this Array");
}

#endif
