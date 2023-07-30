/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:26:49 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/29 23:35:06 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	return (this->FixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->FixedPoint = raw;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::Fixed(int d)
{
	std::cout << "Int constructor called" << std::endl;
	this->FixedPoint = d << this->FractBits;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->FixedPoint = roundf(f * (1 << this->FractBits)); 
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "copy assignment operator called" << std::endl;
	this->FixedPoint = other.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const
{
	return (float(this->getRawBits()) / (1 << this->FractBits));	
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->FractBits);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
