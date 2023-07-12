/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sifl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:43 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 10:12:08 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIFL_HPP
# define SIFL_HPP

# include <iostream>
# include <fstream>

class	rp
{
	private:
		std::fstream	toOpen;
		std::fstream	toWrite;
	public:
		int		streamEditor(std::string FileName, std::string s1, std::string s2);
		int		openAndCheck(std::string FileName);
		void	fillReplaceFile(std::string s1, std::string s2);
};

std::string	addChar(std::string str, char c);
int			sLen(std::string str);

#endif