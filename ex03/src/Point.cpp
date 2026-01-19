/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:34:09 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 13:13:47 by gpollast         ###   ########.fr       */
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

int	Point::getX( void ) const {
	return (this->_x.getRawBits());
}

int	Point::getY( void ) const {
	return (this->_y.getRawBits());
}
