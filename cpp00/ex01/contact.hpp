/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:37:54 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 04:03:35 by zasabri          ###   ########.fr       */
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
					std::string DarkSec);
		void		GetVal(void);
};

#endif