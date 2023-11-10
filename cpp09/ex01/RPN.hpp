/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/10 10:17:32 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <vector>

class   RPN
{
    private:
        std::stack<long> rpnStack;
    public:
        RPN(void);
        RPN(std::string operation);
        RPN(const RPN &other);
        RPN&operator=(const RPN &other);
        ~RPN(void);
};

char operators(char c);
//int         checkSyntax(std::string &all, unsigned long i);
// std::string collectNumbers(std::string &operation, unsigned int *i);
// std::string collectOperators(std::string &operation, unsigned int *i);
// void        fillMyVector(std::string &Numbers, std::string &Operators, std::vector<char> &myVec);
// void        fillMyVector2(std::string &Numbers, std::string &Operators, std::vector<char> &myVec);

#endif