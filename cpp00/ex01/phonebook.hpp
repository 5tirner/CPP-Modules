/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:47:34 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/13 14:10:21 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
	public:
		int			AddToAgenda(PhoneBook *Agenda, int i);
		void		LookAtAgenda(PhoneBook *Agenda, int n);
		int			CheckInput(std::string str);
		void		UpToDateAgenda(PhoneBook *Agenda);
		int			CheckPhoneNumber(std::string Phone);
		std::string	MakeItTen(std::string str);
};
int		len(std::string str);
void	InfosToUse(void);
#endif