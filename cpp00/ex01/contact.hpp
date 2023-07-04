/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:37:54 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/04 19:21:39 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.hpp"

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	PhoneNum;
		std::string	NickName;
		std::string	DarkSecret;
	public:
		void		SetVal(std::string First, std::string Last,
					std::string Number, std::string Nickname,
					std::string DarkSec)
		{
			FirstName	= First;
			LastName	= Last;
			PhoneNum	= Number;
			NickName	= Nickname;
			DarkSecret	= DarkSec;
		}
		void		GetVal()
		{
			std::cout << "|" << FirstName << "|"
			<< LastName << "|" << PhoneNum << "|"
			<< NickName << "|" << std::endl;
		}
};

#endif