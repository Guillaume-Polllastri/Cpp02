/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:59:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 15:18:20 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include <iostream>

int main( void ) {
	Point	a(0, 0);
	// Point	a(1000000.0f, 1000000.0f);
	Point	b(2, 2);
	// Point	b(1000000.1f, 1000000.2f);
	Point	c(3, 0);
	// Point	c(1000000.05f, 1000001.0f);
	Point	point(1, 0);
	// Point	point(1000000.05f, 1000000.15f);
	
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle !\n";
	else
		std::cout << "The point isn't inside the triangle...\n";
    return 0;
}
