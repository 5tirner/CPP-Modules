/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/15 08:47:52 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	comments;
	
	comments.complain("DEBUG");
	std::cout << std::endl;
	comments.complain("INFO");
	std::cout << std::endl;
	comments.complain("WARNING");
	std::cout << std::endl;
	comments.complain("ERROR");
	return (0);
}