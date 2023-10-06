/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/06 04:23:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat&operator=(const Bureaucrat &other);
		~Bureaucrat(void);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		plusGrade(void);
		void		minusGrade(void);
		class		GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		void	signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &obj);

#endif