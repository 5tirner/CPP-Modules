/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:15:44 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 23:02:24 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class   ScalarConverter
{
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter&operator=(const ScalarConverter &other);
        ~ScalarConverter(void);
    public:
        static void convert(std::string s);
};

std::string checkSyntax(std::string &s);
void        dealWithFloat(std::string &s);
void        dealWithDouble(std::string &s);
void        dealWithInteger(std::string &s);
void        dealWithInfinity(char c, std::string s);
void        dealWithNaN(std::string s);
std::string removeSpaces(std::string &s);
std::string naturalPart(std::string &s);
std::string fractioPart(std::string &s);

#endif