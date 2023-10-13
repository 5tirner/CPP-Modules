/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:05:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 03:24:15 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>

class   ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string shName, int gsign, int gexec);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm&operator=(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm(void);
        void	execute(Bureaucrat const &executor);
};

#endif