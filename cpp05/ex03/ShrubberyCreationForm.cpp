/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:06:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/14 00:50:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) :
    AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Constructor Called" << '\n';
    this->target = "Not Set";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) :
    AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Paramz One Called" << '\n';
    this->target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
    AForm(other)
{
    std::cout << "ShrubberyCreationForm Copy One Called" << '\n';
}

ShrubberyCreationForm&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    AForm::operator=(other);
    std::cout << "ShrubberyCreationForm Assignemet here" << '\n';
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Distructor Called" << '\n';
}

/*ShrubberyCreationForm Exec Func*/

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->ShowGradeToExecute() && this->ShowStatus() == true)
    {
        std::fstream file;
        file.open(this->target + "_shrubbery", std::ios::out);
        if (!file)
        {
            std::cout << "File Cannot Opened ❌" << '\n';
            return ;
        }
        file << "       ###\n"
        << "      #o###\n"
        << "    #####o###\n"
        << "   #o#\\#|#/###\n"
        << "    ###\\|/#o#\n"
        << "     # }|{  #\n"
        << "       }|{\n";
        file.close();
        std::cout << "The File Is Opened ✅, You Well Find Tree In " << target + "shrubbery" << '\n';
    }
    else if (this->ShowStatus() == false)
        throw AForm::NotSignedYet();
    else
        throw AForm::GradeTooLowException();
}