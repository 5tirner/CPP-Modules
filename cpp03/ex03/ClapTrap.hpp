/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:17:47 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/04 21:41:12 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap&operator=(const ClapTrap &other);
		~ClapTrap();
		void			initVals(std::string name, int Attack, int Energy, int Hit);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setName(std::string name);
		std::string		getName(void) const;
		int				getHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getAttackPoints(void) const;
		void			status(void) const;
};

#endif