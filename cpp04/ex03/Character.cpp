/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:20:18 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 14:25:37 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void)
{
    std::cout << "Character Constructor Called" << '\n';
    this->name = "character";
}

Character::Character(std::string name)
{
    std::cout << "Character Paramz one Called" << '\n';
    this->name = name;
}

Character::Character(const Character &other) : ICharacter()
{
    std::cout << "Character Copy One Called" << '\n';
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character Assignement Called" << '\n';
    this->name = other.name;
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character Destructor Called" << '\n';
}

/*------------------------------------------------------------*/
