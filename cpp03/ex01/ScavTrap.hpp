/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:01:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/30 19:01:22 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	Scavtrap : public ClapTrap
{
	public:
		Scavtrap(void);
		Scavtrap(const Scavtrap &other);
		Scavtrap&operator=(const Scavtrap &other);
		~Scavtrap();
};

#endif