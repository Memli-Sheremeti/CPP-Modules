/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:59:59 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/20 18:32:23 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed calcul_of_the_slope( Point const a, Point const b ) 
{
    Fixed slope;

    slope = (b.getY() - a.getY())/(b.getX() - a.getX());
    return (slope);
}

Fixed calcul_of_the_point(Point const a, Fixed m) 
{
    Fixed Y;

    Y = a.getY() - (a.getX() * m);
    return (Y);
}

bool is_in_line( Point const a, Point const b, Point const point ) 
{
    
    Fixed X = calcul_of_the_slope(a, b);
    Fixed Y = calcul_of_the_point(a, X);
    Fixed temp = (X * point.getX()) + Y;
    if (temp > point.getY() || temp < point.getY())
        return false;
    else if (temp == point.getY())
        return true;
    else
        return false;
}

Fixed calcul_of_the_area( Point const a, Point const b, Point const c ) 
{
    
    Fixed A = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY();
    Fixed B = b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY();

    Fixed AREA = std::abs(A.toFloat() - B.toFloat()) / 2;
    return (AREA);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) 
{    
    if (is_in_line(a, b, point) || is_in_line(b, c, point) || is_in_line(c, a, point))
        return false;   
    Fixed ABC_Area = calcul_of_the_area(a, b, c);
    Fixed ABP_Area = calcul_of_the_area(a, b , point);
    Fixed APC_Area = calcul_of_the_area(a, point, c);
    Fixed PBC_Area = calcul_of_the_area(point, b, c);
    Fixed SUM = ABP_Area + APC_Area + PBC_Area;
    if (SUM != ABC_Area)
       return false;
    return true;
}	