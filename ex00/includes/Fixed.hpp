/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 11:37:32 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/16 11:54:14 by gpollast         ###   ########.fr       */
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
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
