/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:06:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 20:41:28 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) :
    AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm Constructor Called" << '\n';
}

// ShrubberyCreationForm::ShrubberyCreationForm(std::string shName, int gsign, int gexec) : AForm(shName, gsign, gexec)
// {
//     std::cout << "ShrubberyCreationForm Paramz One Called" << '\n';
//     if (gsign == 145 && gexec == 137)
//     {
//         std::fstream file;
//         file.open(this->showName() + "_shrubbery", std::ios::out);
//         file << "       ###\n"
//         << "      #o###\n"
//         << "    #####o###\n"
//         << "   #o#\\#|#/###\n"
//         << "    ###\\|/#o#\n"
//         << "     # }|{  #\n"
//         << "       }|{\n";
//         file.close();
//     }
// }

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
        file.open(executor.getName() + "_shrubbery", std::ios::out);
        file << "       ###\n"
        << "      #o###\n"
        << "    #####o###\n"
        << "   #o#\\#|#/###\n"
        << "    ###\\|/#o#\n"
        << "     # }|{  #\n"
        << "       }|{\n";
        file.close();
    }
    else
        throw AForm::GradeTooHighException();
}