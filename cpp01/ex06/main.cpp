/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/15 09:53:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	comments;
	
	switch (ac)
	{
		case 1:
			std::cout << "Dir Chi Level" << std::endl;
			break;
		case 2:
			comments.complain(av[1]);
			break;
		default:
			std::cout << "Accept only two args" << std::endl;
			break;
	}
	return (0);
}