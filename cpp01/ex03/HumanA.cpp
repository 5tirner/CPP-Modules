/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/16 19:19:17 by zasabri          ###   ########.fr       */
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
	std::cout << "HumanA attack"
		<< " with \"" << weaponA.getType()
		<< "\" 💥" << std::endl;
}