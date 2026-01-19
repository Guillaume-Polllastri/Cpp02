/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:26:39 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 13:50:19 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
private:
	const Fixed	_x;
	const Fixed	_y;

public:
	Point();
	Point(const float number_x, const float number_y);
	Point(const Point& copy);
	Point&	operator=(const Point& point);
	~Point();

	int	getX( void ) const;
	int	getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);