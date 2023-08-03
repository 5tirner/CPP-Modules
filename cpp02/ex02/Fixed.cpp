/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:38:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/03 06:32:21 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getFpoint(void) const
{
	return (this->Fpoint);
}

Fixed::Fixed(void)
{
	std::cout << "Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignement Called" << std::endl;
	this->Fpoint = other.getFpoint();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(float f)
{
	std::cout << "Float Cnst Called" << std::endl;
	this->Fpoint = round(f * (1 << this->Fbits));
}

Fixed::Fixed(int d)
{
	std::cout << "Int Cnst Called" << std::endl;
	this->Fpoint = d << this->Fbits;
}

float	Fixed::tofloat(void) const
{
	return (float(this->Fpoint) / (1 << this->Fbits));
}

int		Fixed::toInt(void) const
{
	return (this->Fpoint >> this->Fbits);	
}

std::ostream	&operator<<(std::ostream &o, Fixed other)
{
	o << other.tofloat();
	return (o);
}
