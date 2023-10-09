/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:15:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/09 16:30:43 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : name("Not Set Yet"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "Form Constructor Called" << '\n';
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
    name(name),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute)
{
    std::cout << "From Paramitrize One Called" << '\n';
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
    {
        std::cout << "Here\n";
        throw Form::GradeTooHighException();
    }
    if (this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

Form::Form(const Form &other) :
    name(other.name),
    gradeToSign(other.gradeToSign),
    gradeToExecute(other.gradeToExecute)
{
    std::cout << "Form Copy One Called" << '\n';
    this->isSigned = other.isSigned;
}

Form&Form::operator=(const Form &other)
{
    std::cout << "We Have Two Attributes Const So This Move Is Useless, AnyWay:\n"
    << "Form Assignament One Called" << '\n';
    if (this == &other)
        return (*this);
    this->isSigned = other.isSigned;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form Distructor Called" << '\n';
}
/*Exceptions*/

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Error: Grade Is Too High");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Error: Grade Is Too Low");
}

/*Getters*/

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

/*Be signed*/

void    Form::beSigned(Bureaucrat &brc)
{
    if (this->gradeToSign < brc.getGrade())
        throw Form::GradeTooLowException();
    std::cout << this->name << " Is Signed By " << brc.getName() << " 🖊️\n";
    this->isSigned = true;
}


/*Operator <<*/

std::ostream    &operator<<(std::ostream &o, const Form &f)
{
    o << f.showName() << " - " << f.ShowStatus() << " - " << f.ShowGradeToSign() << " - " << f.ShowGradeToSign();
    return (o);
}