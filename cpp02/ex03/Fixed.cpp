/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:48:45 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/25 15:24:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Contructor Called" << '\n';
	this->FixedPoint = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy One Called" << '\n';
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignement Called" << '\n';
	this->FixedPoint = other.FixedPoint;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Distructor Called" << '\n';
}

Fixed::Fixed(float f)
{
	std::cout << "Float Cnst Called" << std::endl;
	this->FixedPoint = round(f * (1 << this->FractBits));
}

Fixed::Fixed(int d)
{
	std::cout << "Int Cnst Called" << std::endl;
	this->FixedPoint = d << this->FractBits;
}

float	Fixed::tofloat(void) const
{
	return (float(this->FixedPoint) / (1 << this->FractBits));
}

int		Fixed::toInt(void) const
{
	return (this->FixedPoint >> this->FractBits);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &other)
{
	o << other.tofloat();
	return (o);
}

/*-----------------------------------------------------------*/

int	Fixed::operator!=(const Fixed &other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>(const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<(const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<=(const Fixed &other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>=(const Fixed &other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

/*--------------------------------------------*/

Fixed	Fixed::operator++(int)
{
	Fixed	other;

	other.FixedPoint = this->FixedPoint++;
	return (other);
}

Fixed	Fixed::operator--(int)
{
	Fixed	other;

	other.FixedPoint = this->FixedPoint--;
	return (other);
}

Fixed	Fixed::operator++(void)
{
	this->FixedPoint++;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->FixedPoint--;
	return (*this);
}

/*-----------------------------------------------*/

Fixed	Fixed::operator+(const	Fixed &other)
{
	Fixed	NewOne;

	NewOne.FixedPoint = (this->getRawBits() + other.getRawBits());
	return (NewOne);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	NewOne;

	NewOne.FixedPoint = (this->getRawBits() - other.getRawBits());
	return (NewOne);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	NewOne;

	NewOne.FixedPoint = (this->getRawBits() * other.getRawBits()) >> FractBits;
	return (NewOne);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	if (!other.FixedPoint)
	{
		std::cout << "Runtime error (func=(main), adr=8): Divide by zero" << '\n';
		return (0);
	}
	else
	{
		Fixed	NewOne;
	
		NewOne.FixedPoint = (this->getRawBits() << FractBits) / other.getRawBits();
		return (NewOne);
	}
}

/*---------------------------------------------------*/

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}