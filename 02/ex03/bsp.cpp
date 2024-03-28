/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/26 13:55:17 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#define PRINT 1

Fixed calcul_of_the_area( Point const a, Point const b, Point const c )
{
	PRINT ? std::cout << " ----------------------- " << std::endl : 0;

    Fixed A = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY();
	PRINT ? (std::cout << "A = " << A << std::endl) : 0;

    Fixed B = b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY();
	PRINT ? std::cout << "B = " << B << std::endl : 0;

    Fixed AREA = std::abs(A.toFloat() - B.toFloat()) / 2;
	PRINT ? std::cout << "AREA = " <<AREA << std::endl : 0;

	PRINT ? std::cout << " ----------------------- " << std::endl : 0;
    return (AREA);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (PRINT)
	{
		std::cout << "a.x = " << a.getX().toInt() << " a.y = " << a.getY().toInt() << std::endl;
 		std::cout << "b.x = " << b.getX() << " b.y = " << b.getY() << std::endl;
 		std::cout << "c.x = " << c.getX() << " c.y = " << c.getY() << std::endl;
 		std::cout << "point.x = " << point.getX() << " point.y = " << point.getY() << std::endl;
	}

    Fixed ABC_Area = calcul_of_the_area(a, b, c);
	PRINT ? std::cout << "ABC == " << ABC_Area << std::endl : 0;


    Fixed ABP_Area = calcul_of_the_area(a, b , point);
	PRINT ? std::cout <<  "APB == " << ABP_Area << std::endl : 0;


	Fixed APC_Area = calcul_of_the_area(a, point, c);
	PRINT ? std::cout <<  "APC == "  <<  APC_Area << std::endl : 0;

	Fixed PBC_Area = calcul_of_the_area(point, b, c);
	PRINT ? std::cout <<  "PBC == " <<  PBC_Area << std::endl : 0;


	Fixed SUM = ABP_Area + APC_Area + PBC_Area;
	PRINT ? std::cout <<  "SUM == " << SUM << std::endl : 0;

    if (SUM != ABC_Area || ABP_Area == 0 ||  APC_Area == 0 || PBC_Area == 0  )
       return false;
    return true;
}
