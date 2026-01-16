/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:59:07 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/16 17:46:32 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 4 );
    Fixed const d( b );
    
    a = Fixed( 2 );
    
    std::cout << C_CYAN << "\nThe original value:" << C_RESET << "\n";
    std::cout << "a = " << a << "\n\n";
    
    std::cout << C_CYAN << "The 6 comparison operators:" << C_RESET << "\n";
    std::cout << "a < c = " << (a < c) << '\n';
    std::cout << "a > c = " << (a > c) << '\n';
    std::cout << "a >= c = " << (a >= c) << '\n';
    std::cout << "a <= c = " << (a <= c) << '\n';
    std::cout << "a == c = " << (a == c) << '\n';
    std::cout << "a != c = " << (a != c) << "\n\n";

    std::cout << C_CYAN << "The 4 arithmetic operators:" << C_RESET << "\n";
    std::cout << "a + c = " << (a + c) << '\n';
    std::cout << "a - c = " << (a - c) << '\n';
    std::cout << "a * c = " << (a * c) << '\n';
    std::cout << "a / c = " << (a / c) << "\n\n";

    std::cout << C_CYAN << "The 4 increment/decrement operators:" << C_RESET << "\n";
    std::cout << "a++ = " << '\n';
    return 0;
}
