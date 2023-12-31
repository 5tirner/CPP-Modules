/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:59:55 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/15 16:44:11 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : name("Not Set Yet"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "AForm Constructor Called" << '\n';
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) :
    name(name),
    gradeToSign(gradeToSign),
    gradeToExecute(gradeToExecute)
{
    // std::cout << "From Paramitrize One Called" << '\n';
    // if (this->gradeToSign < 1 || this->gradeToExecute < 1)
    //     throw AForm::GradeTooHighException();
    // if (this->gradeToExecute > 150 || this->gradeToSign > 150)
    //     throw AForm::GradeTooLowException();
    this->isSigned = false;
}

AForm::AForm(const AForm &other) :
    name(other.name),
    gradeToSign(other.gradeToSign),
    gradeToExecute(other.gradeToExecute)
{
    std::cout << "AForm Copy One Called" << '\n';
    this->isSigned = other.isSigned;
}

AForm&AForm::operator=(const AForm &other)
{
    std::cout << "We Have Two Attributes Const So This Move Is Useless, AnyWay:\n"
    << "AForm Assignament One Called" << '\n';
    if (this == &other)
        return (*this);
    this->isSigned = other.isSigned;
    return (*this);
}

AForm::~AForm(void)
{
    std::cout << "AForm Distructor Called" << '\n';
}

/*Exceptions*/

const char  *AForm::GradeTooHighException::what() const throw()
{
    return ("Error: Grade Is Too High");
}

const char  *AForm::GradeTooLowException::what() const throw()
{
    return ("Error: Grade Is Too Low");
}

const char  *AForm::NotSignedYet::what() const throw()
{
    return ("Error: Form Not Signed");
}

/*Getters*/

std::string    AForm::showName(void) const
{
    return (this->name);
}

bool    AForm::ShowStatus(void) const
{
    return (this->isSigned);
}

int     AForm::ShowGradeToSign(void) const
{
    return (this->gradeToSign);
}

int     AForm::ShowGradeToExecute(void) const
{
    return (this->gradeToExecute);
}

/*Be signed*/

void    AForm::beSigned(Bureaucrat &brc)
{
    if (this->gradeToSign < brc.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->name << " Is Signed By " << brc.getName() << " 🖊️\n";
    this->isSigned = true;
}


/*Operator <<*/

std::ostream    &operator<<(std::ostream &o, const AForm &f)
{
    o << "Name: " << f.showName() << " - "
    << "Status: " << f.ShowStatus() << " - " 
    << "Sign Grade: " << f.ShowGradeToSign() << " - "
    << "Execute Grade: "<< f.ShowGradeToExecute();
    return (o);
}