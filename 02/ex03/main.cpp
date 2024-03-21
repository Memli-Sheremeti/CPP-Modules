/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:11:26 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 11:30:35 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>

int main( void )
{
    Point const a(0, 1);
    Point const b(2, 1);
    Point const c(1, 3);
    Point const d(1, 2);

	Point const w(0, 1);
    Point const x(2, 1);
    Point const y(1, 3);
    Point const z(3, 2);

    if (bsp(a, b, c, d))
		std::cout << "The point is inside the triangle" << std::endl;
    else
		std::cout << "The point is outside the triangle" << std::endl;

	if (bsp(w, x, y, z))
		std::cout << "The point is inside the triangle" << std::endl;
	else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);
}
