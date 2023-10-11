/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:06:05 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/10 23:34:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string name, int gradeToSign, int gradeToExecute);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm&operator=(const PresidentialPardonForm &other);
        ~PresidentialPardonForm(void);
        void    execute(Bureaucrat const &executor);
};

#endif