/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:09 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 08:00:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

int	rp::streamEditor(std::string FileName, std::string s1, std::string s2)
{
	if (openAndCheck(FileName) == 1)
		return (1);
	fillReplaceFile(s1, s2);
	toWrite.close();
	toOpen.close();
	return (0);
}

int main(int ac, char **av)
{
	rp	replace;
	if (ac != 4)
		std::cout << "Invalid Number Of Argements ❌" << std::endl;
	else
		return (replace.streamEditor(av[1], av[2], av[3]));
}