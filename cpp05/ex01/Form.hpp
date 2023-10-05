/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:04:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/05 22:41:30 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		Form&operator=(const Form &other);
		~Form(void);
		std::string	showName(void) const;
		bool		ShowStatus(void) const;
		int			ShowGradeToSign(void) const;
		int			ShowGradeToExecute(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Form &f);	

#endif