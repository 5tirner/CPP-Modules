/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:38:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/25 15:08:05 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int 				FixedPoint;
		static const int	FractBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed(float f);
		Fixed(int d);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);
		
		/*Binary operators*/
		int 	operator>(const Fixed &other) const;
		int 	operator<(const Fixed &other) const;
		int 	operator>=(const Fixed &other) const;
		int 	operator<=(const Fixed &other) const;
		int 	operator==(const Fixed &other) const;
		int 	operator!=(const Fixed &other) const;
		/*Binary operators end*/
		
		/*Unary operators*/
		Fixed	operator++(int); /*Postfix++*/
		Fixed	operator--(int); /*Postfix--*/
		Fixed	operator++(void); /*Prefix++*/
		Fixed	operator--(void); /*Prefix--*/
		/*Unary operators end*/
		
		/*Binary operators: Mathematic operations*/
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		/*Binary operators: Mathematic operations end*/
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	tofloat(void) const;
		int		toInt(void) const;
		/*min a max*/
		static	Fixed	min(const Fixed &a, const Fixed &b);
		static	Fixed	max(const Fixed &a, const Fixed &b);
		static	Fixed	min(Fixed &a, Fixed &b);
		static	Fixed	max(Fixed &a, Fixed &b);
		/*min a max end*/
};

std::ostream	&operator<<(std::ostream &o, const Fixed &other);

#endif