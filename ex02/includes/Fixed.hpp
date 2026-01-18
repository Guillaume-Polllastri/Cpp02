/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:37:32 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/18 21:09:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define C_GREEN "\033[32m"
# define C_RESET "\033[0m"
# define C_YELLOW "\033[33m"
# define C_RED "\033[31m"
# define C_BLUE "\033[34m"
# define C_MAGENTA "\033[35m" 
# define C_CYAN "\033[36m"

#include <iostream>

class Fixed {
private:
    int					_fixed;
	static const int	_fractionnal = 8;

public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int	num);
	Fixed(const float	fnumber);
	
	Fixed& operator=(const Fixed& copy);
	
	bool	operator<(const Fixed& copy);
	bool	operator>(const Fixed& copy);
	bool	operator>=(const Fixed& copy);
	bool	operator<=(const Fixed& copy);
	bool	operator==(const Fixed& copy);
	bool	operator!=(const Fixed& copy);
	
	float	operator+(const Fixed& copy);
	float	operator-(const Fixed& copy);
	float	operator*(const Fixed& copy);
	float	operator/(const Fixed& copy);
	
	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );
	
	~Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<( std::ostream & output, Fixed const & fixed);