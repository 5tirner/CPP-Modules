/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:04 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/05 16:25:07 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <vector>

class   BitcoinExchange
{
    private:
        std::vector<std::string> format;
    public:
        BitcoinExchange(void);
        BitcoinExchange(std::fstream &fileToProcess);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange&operator=(const BitcoinExchange &other);
        ~BitcoinExchange(void);
};

#endif