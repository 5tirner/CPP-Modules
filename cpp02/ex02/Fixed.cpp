/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:38:07 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/30 21:45:33 by zasabri          ###   ########.fr       */
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
