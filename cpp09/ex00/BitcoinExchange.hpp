/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/06 21:41:24 by zasabri          ###   ########.fr       */
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
        std::map<std::string, int> format;
        std::string     buffer;
        std::fstream    inputFile;
        std::fstream    dataCsv;
    public:
        BitcoinExchange(void);
        BitcoinExchange(std::string fileName);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange&operator=(const BitcoinExchange &other);
        ~BitcoinExchange(void);
        void    fillFormat(std::string date, int value);
        int     makeTheThingsHappened(void);
};

/*Pars*/
int checkDate(std::string date);
int checkValue(std::string value);

#endif