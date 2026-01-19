/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:26:39 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 00:38:58 by gpollast         ###   ########.fr       */
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

	static const Point&	min_x(const Point& a, const Point& b, const Point& c);
	static const Point&	max_x(const Point& a, const Point& b, const Point& c);
	static const Point&	max_y(const Point& a, const Point& b, const Point& c);
	static const Point&	min_y(const Point& a, const Point& b, const Point& c);

	static bool		min_x(const Point& a, const Point& point);
	static bool		max_x(const Point& a, const Point& point);
	static bool		min_y(const Point& a, const Point& point);
	static bool		max_y(const Point& a, const Point& point);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);