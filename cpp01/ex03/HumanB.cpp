/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/07 19:55:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	nameB = name;
	weaponB = NULL;
	std::cout << name
		<< ": HumanB 👨"<< std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	//weaponB->setType(club.getType());
	weaponB = &club;
}

void	HumanB::attack(void)
{
	const std::string ref = weaponB->getType();
	if (weaponB)
	{
		std::cout << nameB << " attack with "
			<< ref << "\" 💥"
			<< std::endl;
	}
	else
		std::cout << nameB
		<< "attack with empty hands" << std::endl;
}

HumanB::~HumanB(void)
{
}