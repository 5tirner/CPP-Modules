/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:37:54 by zasabri           #+#    #+#             */
/*   Updated: 2023/06/21 23:51:37 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phonebook.hpp"

class Contact
{
	public:
		std::string		SaveFirst;
        std::string		SaveLast;
        std::string		SavePhone;
		std::string		FirstName[8];
		std::string		LastName[8];
		std::string		PhoneNumber[8];
        int             Index;
        void            ShowAgenda(Contact person);
        int             CheckPhoneNumber(std::string Phone);
        int             GetLen(std::string str);
};

#endif