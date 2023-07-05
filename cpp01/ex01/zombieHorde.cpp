/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:20:33 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 13:55:21 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*TWD;
	int		i;

	TWD = new Zombie[N];
	i = 0;
	while (i < N)
	{
		TWD[i].SetVal(name);
		i++;
	}
	return (TWD);
}