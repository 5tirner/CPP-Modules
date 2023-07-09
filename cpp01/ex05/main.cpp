/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/09 04:49:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	comments;
	
	comments.complain("DEBUG");
	comments.complain("INFO");
	comments.complain("WARNING");
	comments.complain("ERROR");
	return (0);
}