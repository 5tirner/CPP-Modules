/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/12 11:35:28 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>

// /*Collect Tokens*/

// std::string collectNumbers(std::string &operation, unsigned int *i)
// {
//     std::string val;
//     while (operation[*i])
//     {
//         if (std::strchr("+-*/", operation[*i])) break;
//         else if (std::isdigit(operation[*i]))        val += operation[*i];
//         *i += 1;
//     }
//     return (val);
// }

// std::string collectOperators(std::string &operation, unsigned int *i)
// {
//     std::string val;
//     while (operation[*i])
//     {
//         if (std::isdigit(operation[*i]))                  break;
//         else if (std::strchr("+-*/", operation[*i])) val += operation[*i];
//         *i += 1;
//     }
//     return (val);
// }


// /*Get THe Right Syntax*/

// void    fillMyVector(std::string &Numbers, std::string &Operators, std::vector<char> &myVec)
// {
//     std::reverse(Operators.begin(), Operators.end());
//     //std::cout << Operators << '\n';
//     for (unsigned j = 0; j < Numbers.size(); j++)
//     {
//         myVec.push_back(Numbers[j]);
//         if (j < Operators.size())
//             myVec.push_back(Operators[j]);
//     }
// }

// void    fillMyVector2(std::string &Numbers, std::string &Operators, std::vector<char> &myVec)
// {
//     std::reverse(Operators.begin(), Operators.end());
//     //std::cout << Operators << '\n';
//     for (unsigned j = 0; j < Numbers.size(); j++)
//     {
//         myVec.push_back(Operators[j]);
//         myVec.push_back(Numbers[j]);
//     }
// }
// RPN::RPN(std::string operation)
// {
//     std::cout << "Start Operations..." << '\n';
//     unsigned int i = 0;
//     while (operation[i] && operation[i] == ' ') i++;
//     if (!std::isdigit(operation[i]))            throw ("Error ❌");
//     if (checkSyntax(operation, i))         throw ("Error ❌");
//     std::string Numbers = collectNumbers(operation, &i),
//     Operators = collectOperators(operation, &i);
//     if (Numbers.size() - Operators.size() != 1) throw ("Error ❌");
//     fillMyVector(Numbers, Operators, this->rpnVec);
//     while (operation[i])
//     {
//         Numbers = collectNumbers(operation, &i);
//         Operators = collectOperators(operation, &i);
//         if (Numbers.size() != Operators.size())
//             throw ("Error ❌");
//         fillMyVector2(Numbers, Operators, this->rpnVec);
//     }
//     long total = this->rpnVec[0] - 48;
//     for (unsigned int i = 0; i < this->rpnVec.size(); i++)
//     {
//         std::cout << this->rpnVec[i] << ' ';
//         char logicalOpeartion;
//         if (i % 2)
//             logicalOpeartion = this->rpnVec[i];
//         else
//         {
//             if (logicalOpeartion == '+')      total += this->rpnVec[i] - 48;
//             else if (logicalOpeartion == '-') total -= this->rpnVec[i] - 48;
//             else if (logicalOpeartion == '*') total *= this->rpnVec[i] - 48;
//             else if (logicalOpeartion == '/') total /= this->rpnVec[i] - 48;
//         }
//     }
//     std::cout << '\n';
//     std::cout << "=> " << total << '\n';
// }

// /*Check*/

// int checkSyntax(std::string &all, unsigned long i)
// {
//     while (i < all.size())
//     {
//         if (!std::strchr("+-*/ ", all[i]) && !std::isdigit(all[i])) return (1);
//         i++;
//     }
//     return (0);
// }

//Opeartors

char operators(char c)
{
    if (!std::strchr("+-*/", c))
        return ('f');
    return (c);
}

/*Orthdox Cannonical Form*/

RPN::RPN(void)
{
    std::cout << "RPN Constructor Called" << '\n';
}

RPN::RPN(std::string operation)
{
    std::cout << "Start Operations..." << '\n';
    unsigned int i = 0;
    while (operation[i] && operation[i] == ' ') i++;
    char    op;
    long    collecter;
    while (operation[i])
    {
        if (operation[i] == ' ')
            i++;
        else
        {
            if (std::isdigit(operation[i]))
                this->rpnStack.push(operation[i] - 48);
            else
            {
                if (this->rpnStack.size() < 2) throw ("Error");
                op = operators(operation[i]);
                if (op == 'f') throw ("Error");
                collecter = this->rpnStack.top();
                this->rpnStack.pop();
                std::cout << collecter << "  " << op << "  " << this->rpnStack.top() << '\n';
                if (op == '+')      this->rpnStack.top() += collecter;
                else if (op == '-') this->rpnStack.top() -= collecter;
                else if (op == '*') this->rpnStack.top() *= collecter;
                else
                {
                    if (collecter == 0)
                        throw ("Error: There Is A Devision Per Zero");
                    this->rpnStack.top() /= collecter;
                }
            }
            i++;
        }
    }
    if (this->rpnStack.size() != 1) throw ("Error");
    std::cout << this->rpnStack.top() << '\n'; this->rpnStack.pop();
}

RPN::RPN(const RPN &other)
{
    std::cout << &other << '\n';
}

RPN&RPN::operator=(const RPN &other)
{
    std::cout << &other << '\n';
    return (*this);
}

RPN::~RPN(void)
{
    std::cout << "Operation Done" << '\n';
}