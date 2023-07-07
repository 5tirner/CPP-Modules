/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/07 19:34:48 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : weaponA(club)
{
	nameA = name;
	std::cout << nameA
		<< ": HumanA 👨"<< std::endl;
}

void	HumanA::attack(void)
{
	const std::string	&ref = weaponA.getType();
	std::cout << "HumanA attack"
		<< " with \"" << ref
		<< "\" 💥" << std::endl;
}

HumanA::~HumanA(void)
{
}