/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:04:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/06 04:19:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class	Bureaucrat;
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
		class		GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		void	beSigned(Bureaucrat &brc);
};

std::ostream	&operator<<(std::ostream &o, const Form &f);	

#endif