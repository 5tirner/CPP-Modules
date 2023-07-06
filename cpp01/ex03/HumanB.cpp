/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/06 17:15:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << name
		<< ": HumanB 👨"<< std::endl;
}

void	HumanB::setWeapon(Weapon club)
{
	weaponB = &club;
}

void	HumanB::attack(void)
{
	std::string	ref = weaponB->getType();
	//std::cout << weaponB->getType() << std::endl;
	std::cout << "HumanB attack"
	<< " with \"" << ref
	<< "\" 💥" << std::endl;
}

HumanB::~HumanB(void)
{
}