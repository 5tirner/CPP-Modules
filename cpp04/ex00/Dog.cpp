/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:05:29 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/08 17:25:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Constructor Called" << '\n';
	this->type = "NOT SET YET";
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog Copy One Called" << '\n';
	*this = other;
}

Dog&Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Distructor Called" << '\n';
}