/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/09 10:38:28 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <vector>

class   RPN
{
    private:
        std::vector<char> rpnVec;
    public:
        RPN(void);
        RPN(std::string operation);
        RPN(const RPN &other);
        RPN&operator=(const RPN &other);
        ~RPN(void);
};

std::string collectNumbers(std::string &operation, unsigned int *i);
std::string collectOperators(std::string &operation, unsigned int *i);
int         checkSyntax(std::string &all, unsigned long i);
void        fillMyVector(std::string &Numbers, std::string &Operators, std::vector<char> &myVec);
void        fillMyVector2(std::string &Numbers, std::string &Operators, std::vector<char> &myVec);

#endif