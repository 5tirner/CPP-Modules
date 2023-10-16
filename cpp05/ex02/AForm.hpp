/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:59:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/16 10:12:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>

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
		virtual ~AForm(void);
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
		class	NotSignedYet : public std::exception
		{
			const char*	what() const throw();
		};
		void			beSigned(Bureaucrat &brc);
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, const AForm &f);

#endif