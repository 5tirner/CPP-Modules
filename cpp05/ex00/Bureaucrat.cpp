/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:37:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/03 01:01:56 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(void) : name("Not Set Yet")
{
    std::cout << "Bureaucrat Constructor Called" << '\n';
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << "Bureaucrat Paramitrize One Called" << '\n';
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Bureaucrat Copy One Called" << '\n';
    *this = other;
}

Bureaucrat&Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat Assignement One Called" << '\n';
    (std::string)this->name = other.name;
    this->grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Distructor Called" << '\n';
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::plusGrade(void)
{
    this->grade--;
    std::cout << this->name 
    << ": Rise Up From The Grade " << this->grade + 1 
    << " To The Grade " << this->grade << " ⬆️" <<'\n';
}

void    Bureaucrat::minusGrade(void)
{
    this->grade++;
    std::cout << this->name 
    << ": Down From The Grade " << this->grade - 1 
    << " Into The Grade " << this->grade << " ⬇️" <<'\n';
}