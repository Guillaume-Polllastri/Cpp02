/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:58:16 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 00:58:17 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (Point::min_x(Point::min_x(a, b, c), point)
		&& Point::max_x(Point::max_x(a, b, c), point)
		&& Point::min_y(Point::min_y(a, b, c), point)
		&& Point::max_y(Point::max_y(a, b, c), point))
		return (true);
	return (false);
}
