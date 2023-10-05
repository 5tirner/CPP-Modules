/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:15:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/05 03:24:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <ostream>

Form::Form(void) : name("Not Set Yet"), isSigned(false), gradeRequired(150)
{
    std::cout << "Form Constructor Called" << '\n';
}

Form::Form(std::string name, int gradeRequired) : name(name), gradeRequired(gradeRequired)
{
    std::cout << "From Paramitrize One Called" << '\n';
    this->isSigned = false;
}

Form::Form(const Form &other) : name(other.name), gradeRequired(other.gradeRequired)
{
    std::cout << "Form Copy One Called" << '\n';
    this->isSigned = false;
}

Form&Form::operator=(const Form &other)
{
    std::cout << "We Have Two Attributes Const So This Move Is Useless, AnyWay:\n"
    << "Form Assignament One Called" << '\n';
    if (this == &other)
        return (*this);
    this->isSigned = false;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form Distructor Called" << '\n';
}

/*---------------------------------------------------*/

std::string    Form::showName(void) const
{
    return (this->name);
}

bool    Form::ShowStatus(void) const
{
    return (this->isSigned);
}

int     Form::ShowGrade(void) const
{
    return (this->gradeRequired);
}

std::ostream    &operator<<(std::ostream &o, const Form &f)
{
    o << f.showName() << " - " << f.ShowStatus() << " - " << f.ShowGrade();
    return (o);
}