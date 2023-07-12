/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openAndCheck.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:35:43 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 10:04:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

int rp::openAndCheck(std::string FileName)
{
	toOpen.open(FileName, std::ios::in);
	if (!toOpen)
	{
		std::cout << "Somthing Wrong ⚠️" << std::endl;
		return (1);
	}
	toWrite.open(FileName + ".replace", std::ios::out);
	if (!toWrite)
	{
		std::cout << "Error When \'file.replcae\' Created"
			<< std::endl;
		return (1);
	}
	return (0);
}