/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/06 23:41:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <vector>
# include <map>

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
};

/*Pars*/
int checkDate(std::string date);
int checkValue(std::string value);

#endif