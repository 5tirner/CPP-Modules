/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:24:33 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 13:49:06 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	SetVal(std::string str)
		{
			name = str;
		}
};

Zombie*	zombieHorde( int N, std::string name);

#endif