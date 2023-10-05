/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:04:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/05 03:19:55 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeRequired;
	public:
		Form(void);
		Form(std::string name, int gradeRequired);
		Form(const Form &other);
		Form&operator=(const Form &other);
		~Form(void);
		std::string	showName(void) const;
		bool		ShowStatus(void) const;
		int			ShowGrade(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Form &f);	

#endif