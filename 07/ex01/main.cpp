#include <iostream>
#include "iter.hpp"

void    print( int x )
{
    std::cout << x << std::endl;
    return ;
}

int main( void )
{
    int arr[3] = {3, 0, 5};

    ft_iter(arr, 3, print);
    return (0);
}