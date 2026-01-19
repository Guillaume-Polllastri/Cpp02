/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:58:16 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 15:02:41 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

static Fixed	abs(const Fixed& fixed)
{
	if (fixed < Fixed(0))
		return (fixed * Fixed(-1));
	return (fixed);
}

static Fixed	area(const Point& a, const Point& b, const Point& c)
{
	Fixed	area = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
	area = area / Fixed(2);
	return (abs(area));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	triangle_area = area(a, b, c);
	Fixed	area_1 = area(point, b, c);
	Fixed	area_2 = area(a, point, c);
	Fixed	area_3 = area(a, b, point);
	Fixed	sum1;
	Fixed	sum2;
	
	sum1 = area_1 + area_2;
	sum2 = sum1 + area_3;
	return (sum2 == triangle_area);
}
