/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openAndCheck.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:35:43 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 11:50:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

int rp::openAndCheck(std::string FileName)
{
	std::string replace = FileName + ".replace";
	const char *fileToOpen = FileName.c_str();
	const char *fileToWrite = replace.c_str();
	toOpen.open(fileToOpen, std::ios::in);
	if (!toOpen)
	{
		std::cout << "Somthing Wrong ⚠️" << std::endl;
		return (1);
	}
	toWrite.open(fileToWrite, std::ios::out);
	if (!toWrite)
	{
		std::cout << "Error When \'file.replcae\' Created"
			<< std::endl;
		return (1);
	}
	return (0);
}