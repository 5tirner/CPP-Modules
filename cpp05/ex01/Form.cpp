/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:15:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/05 21:39:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Not Set Yet"), isSigned(false), gradeToSign(75), gradeToExecute(20)
{
    std::cout << "Form Constructor Called" << '\n';
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "From Paramitrize One Called" << '\n';
    this->isSigned = false;
}

Form::Form(const Form &other) : name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
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

int     Form::ShowGradeToSign(void) const
{
    return (this->gradeToSign);
}

int     Form::ShowGradeToExecute(void) const
{
    return (this->gradeToExecute);
}

/*Operator <<*/

std::ostream    &operator<<(std::ostream &o, const Form &f)
{
    o << f.showName() << " - " << f.ShowStatus() << " - " << f.ShowGradeToSign() << f.ShowGradeToSign();
    return (o);
}