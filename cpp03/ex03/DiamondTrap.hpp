/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:49:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/04 19:14:00 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap(void);
		void	whoAmI(void);
};

#endif