/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:51:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/16 10:12:56 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <iostream>

class    RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(const  RobotomyRequestForm &other);
        RobotomyRequestForm&operator=(const  RobotomyRequestForm &other);
        ~RobotomyRequestForm(void);
        void	execute(Bureaucrat const &executor) const;
};

#endif