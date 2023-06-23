/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:47:34 by zasabri           #+#    #+#             */
/*   Updated: 2023/06/23 06:58:17 by zasabri          ###   ########.fr       */
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
		// void	Fill_contact(std::string First, std::string Last, std::string Number, int i)
		// {
		// 	contact[i].SetVal(First, Last, Number, i);
		// }
		// void	Get_contact(int	i)
		// {
		// 	contact[i].GetVal();
		// }
		int			AddToAgenda(PhoneBook *Agenda, int i);
		void		LookAtAgenda(PhoneBook *Agenda, int n);
		int			CheckInput(std::string str);
		void		UpToDateAgenda(PhoneBook *Agenda);
		int			CheckPhoneNumber(std::string Phone);
		std::string	MakeItTen(std::string str);
};

#endif