/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:03:32 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/03 19:54:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &Sother);
		~ScavTrap(void);
		void	attack(const std::string &target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		void	guardGate(void);
};
#endif