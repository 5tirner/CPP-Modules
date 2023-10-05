/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:37:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/04 23:13:15 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <string>

Bureaucrat::Bureaucrat(void) : name("Not Set Yet")
{
    std::cout << "Bureaucrat Constructor Called" << '\n';
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
    std::cout << "Bureaucrat Paramitrize One Called" << '\n';
    if (_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (_grade < 1)
        throw  Bureaucrat::GradeTooLowException();
    this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "Bureaucrat Copy One Called" << '\n';
}

Bureaucrat&Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "NB: The Assignment Is Useless Because The Name Is Const\n"
    << "Bureaucrat Assignement One Called" << '\n';
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
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
    std::cout << this->name 
    << ": Rise Up From The Grade " << this->grade + 1 
    << " To The Grade " << this->grade << " ⬆️" <<'\n';
}

void    Bureaucrat::minusGrade(void)
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
    std::cout << this->name 
    << ": Down From The Grade " << this->grade - 1 
    << " Into The Grade " << this->grade << " ⬇️" <<'\n';
}

/*Override <<*/

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (o);
}