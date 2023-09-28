/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:51:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 14:17:45 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
Cure::Cure(void)
{
    std::cout << "Cure Constructor Called" << '\n';
    this->type = "Cure";
}

Cure::Cure(std::string type)
{
    std::cout << "Cure Paramz One Called" << '\n';
    this->type = type;
}

Cure::Cure(const Cure &other) : AMateria()
{
    std::cout << "Cure Copy One Called" << '\n';
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure Assignement One Called" << '\n';
    this->type = other.type;
    return (*this);
}

Cure::~Cure(void)
{
    std::cout << "Cure Destructor Called" << '\n';
}

/*------------------------------------------------------------*/