/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:37:32 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/14 12:40:15 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
	
	~Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};
