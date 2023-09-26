/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:44:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/26 15:58:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor Called" << '\n';
	this->type = "UNKOWING WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat Paramitrize Called" << '\n';
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "WrongCat Copy One Called" << '\n';
	*this = other;
}

WrongCat&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Distructor Called" << '\n';
}

/*----------------------------------------------------*/

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << " Do: Myaw" << '\n';
}