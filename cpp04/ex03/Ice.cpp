/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:45:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 14:17:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void)
{
    std::cout << "Ice Constructor Called" << '\n';
    this->type = "ice";
}

Ice::Ice(std::string type)
{
    std::cout << "Ice Paramz One Called" << '\n';
    this->type = type;
}

Ice::Ice(const Ice &other) : AMateria()
{
    std::cout << "Ice Copy One Called" << '\n';
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice Assignement One Called" << '\n';
    this->type = other.type;
    return (*this);
}

Ice::~Ice(void)
{
    std::cout << "Ice Destructor Called" << '\n';
}

/*------------------------------------------------------------*/