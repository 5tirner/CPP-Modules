/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 19:01:00 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << "HumanB Here" << std::endl;
}

HumanB::HumanB(std::string name)
{
	std::cout << name
		<< ": HumanB 👨"<< std::endl;
}

void	HumanB::setWeapon(Weapon club)
{
	weaponB = club;
}

void	HumanB::attack(void)
{
	std::cout << "HumanB attack" << std::endl;
}