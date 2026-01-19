/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:59:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 01:22:00 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include <iostream>

int main( void ) {
	Point	a(0, 0);
	Point	b(2, 2);
	Point	c(3, 0);
	Point	point(1, 2);
	
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle !\n";
	else
		std::cout << "The point isn't inside the triangle...\n";
    return 0;
}
