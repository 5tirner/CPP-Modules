/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 03:29:03 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <vector>
# include <cctype>
# include <cstring>
# include <iterator>
# include <map>
# include <stdexcept>
# include <algorithm>

class   BitcoinExchange
{
    private:
        std::map<std::string, std::string> format;
        std::string     buffer;
        std::fstream    inputFile;
        std::fstream    dataCsv;
    public:
        BitcoinExchange(void);
        BitcoinExchange(std::string fileName);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange&operator=(const BitcoinExchange &other);
        ~BitcoinExchange(void);
        int makeTheThingsHappened(void);
        std::map<std::string, std::string> getFormat(void);
};

/*Pars*/
int     checkDate(std::string date);
int     checkValue(std::string value);
int     checkBigNUmbers(std::string value);
void    outPutResult(std::string date, std::string value, std::map<std::string, std::string> format);

#endif