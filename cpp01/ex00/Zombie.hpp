/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:15:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/16 18:32:41 by zasabri          ###   ########.fr       */
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
		void		SetVal(std::string str);
        void		announce(void);
        ~Zombie(void);
};

Zombie	*newZombie(std::string name);
void    randomChump(std::string name);
#endif