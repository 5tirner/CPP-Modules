/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:37:54 by zasabri           #+#    #+#             */
/*   Updated: 2023/06/23 21:51:17 by zasabri          ###   ########.fr       */
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
		//int			Index;
	public:
		void		SetVal(std::string First, std::string Last, std::string Number)
		{
			FirstName	= First;
			LastName	= Last;
			PhoneNum	= Number;
			//Index		= i;
		}
		void		GetVal()
		{
			std::cout << " | " << FirstName << " | "
			<< LastName << " | " << PhoneNum << std::endl;
		}
};

#endif