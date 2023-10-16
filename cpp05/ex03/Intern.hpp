/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:59:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/15 15:31:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP


# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class   Intern
{
    public:
        Intern(void);
        Intern(const Intern &other);
        Intern&operator=(const Intern &other);
        ~Intern(void);
        AForm   *makeForm(std::string FormName, std::string target);
};

std::string goodName(std::string name);

#endif