/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:38:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/03 06:32:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int 				Fpoint;
		static const int	Fbits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed(float f);
		Fixed(int d);
		Fixed &operator=(const Fixed &other);
		Fixed &operator>(const Fixed &other);
		Fixed &operator<(const Fixed &other);
		Fixed &operator>=(const Fixed &other);
		Fixed &operator<=(const Fixed &other);
		Fixed &operator==(const Fixed &other);
		Fixed &operator!=(const Fixed &other);
		Fixed &operator+(const Fixed &other);
		Fixed &operator-(const Fixed &other);
		Fixed &operator*(const Fixed &other);
		Fixed &operator/(const Fixed &other);
		~Fixed(void);
		int		getFpoint(void) const;
		float	tofloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed other);

#endif