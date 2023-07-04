/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:15:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/04 18:10:10 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string	name;
    public:
		void		GetVal(std::string str)
		{
			name = str;
		}
        void		announce(void);
};

Zombie	*newZombie(std::string name);
void    randomChump(std::string name);
#endif