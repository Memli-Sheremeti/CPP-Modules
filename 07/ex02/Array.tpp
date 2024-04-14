#include "Array.hpp"

template <typename T>
Array::Array( unsigned int x)
{
    this->size = x;
    this->arr = new T[x];
    return ;
}

template <typename T>
Array::Array( void )
{
    this->size = 0;
    this->arr = 0;
    return ;
}

template <typename T>
Array::~Array( void )
{
    delete [] this->arr;
    return ;
}

template <typename T>
const char* Array::WrongArray::what( void ) const throw()
{
    return ("Error with for this Array");
}