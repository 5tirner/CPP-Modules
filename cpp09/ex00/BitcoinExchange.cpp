/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:16 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/05 17:39:55 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange(void) {}
BitcoinExchange::BitcoinExchange(std::fstream &fileToProcess)
{
    std::cout << "Start Working On Input..." << '\n';
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {}
BitcoinExchange&BitcoinExchange::operator=(const BitcoinExchange &other) {return (*this);}
BitcoinExchange::~BitcoinExchange(void)
{
    std::cout << "Task Done" << '\n';    
}
