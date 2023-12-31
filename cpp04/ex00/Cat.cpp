/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:18:18 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/10 14:37:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor Called" << '\n';
	this->type = "UNKOWING CAT";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat Paramitrize Called" << '\n';
	this->type = type;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat Copy One Called" << '\n';
	*this = other;
}

Cat&Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Distructor Called" << '\n';
}

/*----------------------------------------------------*/

void	Cat::makeSound(void) const
{
	std::cout << this->type << " Do: Myaw" << '\n';
}