/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:01:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/26 15:58:37 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>

Animal::Animal(void)
{
	std::cout << "Animal Constructor Called" << '\n';
	this->type = "UNKOWING ANIMAL";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Constructor Param Called" << '\n';
	this->type = type;	
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy One Called" << '\n';
	*this = other;
}

Animal&Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Distructor Called" << '\n';
}

/*------------------------------------------------------------*/

void	Animal::setType(std::string type)
{
	std::cout << type << " Has Been Seted" << '\n';
	this->type = type;
}

std::string	Animal::getType(void) const
{
	//std::cout << this->type << " Was Geted" << '\n';
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << " Animal Sound" << '\n';
}