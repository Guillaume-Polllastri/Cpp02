/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:55:01 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 15:32:57 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructor

Fixed::Fixed(): _fixed(0) {
    // std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy): _fixed(copy._fixed) {
    // std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int num) {
    // std::cout << "Int constructor called\n";
    this->_fixed = roundf(num << this->_fractionnal);
}

Fixed::Fixed(const float fnumber) {
    // std::cout << "Float constructor called\n";
    this->_fixed = roundf(fnumber * (1 << this->_fractionnal));
}

// Destructor

Fixed::~Fixed() {
    // std::cout << "Destructor called\n";
}

// Assignment operator overload

// Comparison operators

Fixed&  Fixed::operator=(const Fixed& copy) {
    // std::cout << "Copy assignment operator called\n";
    if (this != &copy)
        this->_fixed = copy.getRawBits();
    return *this;
}

bool    Fixed::operator<(const Fixed& fixed) const {
    if (this->_fixed < fixed._fixed)
        return (true);
    return (false);
}

bool	Fixed::operator>(const Fixed& fixed) const {
    if (this->_fixed > fixed._fixed)
        return (true);
    return (false);
}

bool	Fixed::operator>=(const Fixed& fixed) const {
    if (this->_fixed >= fixed._fixed)
        return (true);
    return (false);
}

bool	Fixed::operator<=(const Fixed& fixed) const {
    if (this->_fixed <= fixed._fixed)
        return (true);
    return (false);
}

bool	Fixed::operator==(const Fixed& fixed) const {
    if (this->_fixed == fixed._fixed)
        return (true);
    return (false);
}

bool	Fixed::operator!=(const Fixed& fixed) const {
    if (this->_fixed != fixed._fixed)
        return (true);
    return (false);
}

// Arithmetic operators

float	Fixed::operator+(const Fixed& fixed) const {
    return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(const Fixed& fixed) const {
    return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(const Fixed& fixed) const {
    return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(const Fixed& fixed) const {
    if (this->_fixed == 0 || fixed._fixed == 0)
        return (0);
    return (this->toFloat() / fixed.toFloat());
}

// Increment/Decrement operators

Fixed&	Fixed::operator++( void )
{
    this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp(*this);
    this->_fixed++;
	return (tmp);
}

Fixed&	Fixed::operator--( void )
{
    this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(*this);
    this->_fixed--;
	return (tmp);
}

std::ostream&	operator<<( std::ostream & output, Fixed const & fixed)
{
    output << fixed.toFloat();
    return (output);
}

// Methods

int Fixed::getRawBits( void ) const {
    return this->_fixed;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixed = raw;
}

float	Fixed::toFloat( void ) const {
    return static_cast<float>(this->_fixed) / (1 << this->_fractionnal);
}

int		Fixed::toInt( void ) const {
    return (roundf(this->_fixed >> this->_fractionnal)); 
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
