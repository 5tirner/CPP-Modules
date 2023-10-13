/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:36:43 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 20:19:08 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define  PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>

class    PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(void);
       // PresidentialPardonForm(std::string shName, int gsign, int gexec);
        PresidentialPardonForm(const  PresidentialPardonForm &other);
        PresidentialPardonForm&operator=(const  PresidentialPardonForm &other);
        ~PresidentialPardonForm(void);
        void	execute(Bureaucrat const &executor);
};

#endif