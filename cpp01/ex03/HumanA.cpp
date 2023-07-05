/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 18:59:57 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << "HumanA Here" << std::endl;
}

HumanA::HumanA(std::string name, Weapon club)
{
	club.getType();
	weaponA = club;
	std::cout << name
		<< ": HumanA 👨"<< std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "HumanA attack" << std::endl;
}