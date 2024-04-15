/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 08:40:14 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 09:15:57 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void    print( int x )
{
    std::cout << x << std::endl;
    return ;
}

void	add( int & y )
{
	y++;
	return ;
}

int main( void )
{
    int arr[3] = {3, 0, 5};

    ft_iter(arr, 3, print);
	ft_iter(arr, 3, add);
	ft_iter(arr, 3, print);
    return (0);
}
