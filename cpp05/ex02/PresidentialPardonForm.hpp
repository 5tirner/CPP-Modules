/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:06:05 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/10 13:09:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

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
};

#endif