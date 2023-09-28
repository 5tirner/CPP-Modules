/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:39:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 13:51:00 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria Constructor Called" << '\n';
    this->type = "AMateria pure";
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Paramz Called" << '\n';
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria Copy One Called" << '\n';
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria Assignement One Called" << '\n';
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria Distructor Called" << '\n';
}

/*----------------------------------------------------------*/

void    AMateria::use(ICharacter &target)
{
    std::cout << "Pure AMateria: *" << '\n';
}
