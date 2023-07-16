/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:43:05 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/16 20:53:09 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*TWD;
	int		i;

	i = 0;
	TWD = zombieHorde(0, "Foo");
	if (!TWD)
		return (1);
	while (i < 5)
	{
		TWD[i].announce();
		i++;
	}
	delete [] TWD;
}