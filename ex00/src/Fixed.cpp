/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:55:01 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/16 11:54:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>


Fixed::Fixed(): _fixed(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy) {
    std::cout << "Copy constructor called\n";
    *this = copy;
}

Fixed&  Fixed::operator=(const Fixed& copy) {
    std::cout << "Copy assignment operator called\n";
    if (this != &copy)
        this->_fixed = copy.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called\n";
    return this->_fixed;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixed = raw;
}
