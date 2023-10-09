/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:04:15 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/09 10:04:17 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class	Bureaucrat;
class	AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
		AForm(void);
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &other);
		AForm&operator=(const AForm &other);
		~AForm(void);
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
		virtual void	beSigned(Bureaucrat &brc) = 0;
};

std::ostream	&operator<<(std::ostream &o, const AForm &f);	

#endif