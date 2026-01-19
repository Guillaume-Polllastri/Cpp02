/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:34:09 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 01:21:37 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

Point::Point(): _x(0), _y(0) {
}

Point::Point(const float number_x, const float number_y): _x(number_x), _y(number_y) {
}

Point::Point(const Point& copy): _x(copy._x), _y(copy._y) {
}

Point&	Point::operator=(const Point& point) {
	(void)point; // overload operator INUTILE
	return *this;
}

Point::~Point() {
}

const Point&	Point::min_x(const Point& a, const Point& b, const Point& c) {
	if (Fixed::min(Fixed::min(a._x, b._x), c._x) == c._x)
		return (c);
	else if (Fixed::min(Fixed::min(a._x, b._x), c._x) == b._x)
		return (b);
	return (a);
}

const Point&	Point::max_x(const Point& a, const Point& b, const Point& c) {
	if (Fixed::max(Fixed::max(a._x, b._x), c._x) == c._x)
		return (c);
	else if (Fixed::max(Fixed::max(a._x, b._x), c._x) == b._x)
		return (b);
	return (a);
}

const Point&	Point::min_y(const Point& a, const Point& b, const Point& c) {
	if (Fixed::min(Fixed::min(a._y, b._y), c._y) == c._y)
		return (c);
	else if (Fixed::min(Fixed::min(a._y, b._y), c._y) == b._y)
		return (b);
	return (a);
}

const Point&	Point::max_y(const Point& a, const Point& b, const Point& c) {
	if (Fixed::max(Fixed::max(a._y, b._y), c._y) == c._y)
		return (c);
	else if (Fixed::max(Fixed::max(a._y, b._y), c._y) == b._y)
		return (b);
	return (a);
}

bool	Point::min_x(const Point& a, const Point& point) {
	if (Fixed::min(a._x, point._x) == a._x)
		return (true);
	return (false);
}

bool	Point::max_x(const Point& a, const Point& point) {
	if (Fixed::max(a._x, point._x) == a._x)
		return (true);
	return (false);
}

bool	Point::min_y(const Point& a, const Point& point) {
	if (Fixed::min(a._y, point._y) == a._y)
		return (true);
	return (false);
}

bool	Point::max_y(const Point& a, const Point& point) {
	if (Fixed::max(a._y, point._y) == a._y)
		return (true);
	return (false);
}
