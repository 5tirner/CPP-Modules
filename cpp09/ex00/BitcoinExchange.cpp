/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:16 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/16 23:17:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>
#include <cstring>
#include <map>
#include <string>

/*Pars The Input*/

// Value
int checkValue(std::string value)
{
    int i = 0, point = 0;
    while (value[i])
    {
        if ((value[i] == '-' || value[i] == '+') && (i != 0)) return (1);
        if (value[i] == '.')
        {
            point++;
            if (i == 0) return (1);
            if (value[i + 1] && !isdigit(value[i + 1])) return (1);
            if (!value[i + 1]) return (1);
            if (point > 1) return (1);
        }
        if (!isdigit(value[i]) && value[i] != '+' && value[i] != '-' && value[i] != '.') return (1);
        i++;
    }
    return (0);
}

int checkBigNUmbers(std::string value)
{
    int i = 0;
    if (strchr("+-", value[0])) i++;
    while (value[i] && value[i] == '0')
        i++;
    char *s_val = &value[i];
    if (std::strchr(s_val, '.'))
    {
        int j = 0;
        while (s_val && s_val[j] != '.')
            j++;
        if (j > 4 || std::atof(s_val) > 1000.0)
            return (1);
    }
    else
    {
        if (std::strlen(s_val) > 4 || std::atoi(s_val) > 1000)
            return (1);
    }
    return (0);
}

// Date
int checkDate(std::string date)
{
    std::string year, month, day;
    int sep = 0, i = 0;
    while (date[i])
    {
        if ((!isdigit(date[i]) && date[i] != '-') || (sep > 2)) return (1);
        if (date[i] == '-') sep++;
        else
        {
            if      (sep == 0) year += date[i];
            else if (sep == 1) month += date[i];
            else               day += date[i];
        }
        i++;
    }
    int y, m, d;
    y = std::atoi(year.c_str());
    m = std::atoi(month.c_str());
    d = std::atoi(day.c_str());
    if (y < 2009 || y > 2022 || m < 1 || m > 12 || d < 0 || d > 31) return (1);
    if (y == 2009 && m == 1 && d < 2)                               return (1);
    if (y == 2022 && m == 3 && d > 29)                              return (1);
    if (m == 2 && y % 4 && d > 28)                                  return (1);
    if (m == 4 || m == 6 || m == 9 || m == 11)        {if (d > 30)  return (1);}
    return (0);
}

//OutPut Maker

void    outPutResult(std::string date,
        std::string value, std::map<std::string, std::string> format)
{
    std::map<std::string, std::string>::iterator toFind = format.find(date);
    std::cout << date << " => " << value << " = ";
    if (toFind == format.end())
    {
        format[date] = value;
        std::map<std::string, std::string>::iterator getBack = format.find(date);
        getBack--;
        if (std::strchr(value.c_str(), '.') || std::strchr(getBack->second.c_str(), '.'))
            std::cout << std::atof(getBack->second.c_str()) * std::atof(value.c_str()) << '\n';
        else
            std::cout << std::atoi(getBack->second.c_str()) * std::atoi(value.c_str()) << '\n';
    }
    else
    {
        if (std::strchr(value.c_str(), '.') || std::strchr(toFind->second.c_str(), '.'))
            std::cout << std::atof(toFind->second.c_str()) * std::atof(value.c_str()) << '\n';
        else
            std::cout << std::atoi(toFind->second.c_str()) * std::atoi(value.c_str()) << '\n';
    }
}

//Parsing And Check The Validity Of Date And Value And Get Result

int BitcoinExchange::makeTheThingsHappened(void)
{
    int             i = 0;
    std::string     firstPart, seperator, lastPart;
    while (this->buffer[i] && this->buffer[i] != ' ')
    {
        firstPart += this->buffer[i];
        i++;
    }
    while (this->buffer[i] && !std::isdigit(this->buffer[i])
            && this->buffer[i] != '-' && this->buffer[i] != '+')
    {
        seperator += this->buffer[i];
        i++;
    }
    while (this->buffer[i])
    {
        lastPart += this->buffer[i];
        i++;
    }
    if (!firstPart.size() || !seperator.size()
        || !lastPart.size() || seperator != " | " || firstPart.length() != 10
        || checkDate(firstPart) || checkValue(lastPart)) return (1);
    else if (checkBigNUmbers(lastPart)) return (2);
    else if (lastPart[0] == '-')               return (3);
    outPutResult(firstPart, lastPart, this->format);
    return (0);
}


/*Orthodox Cannonial*/

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string fileName)
{
    //Start
    std::cout << "Start Working On Input..." << '\n' << std::endl;
    //Try Open data.csv And Store It In A map Container
    this->dataCsv.open("data.csv", std::ios::in);
    if (!this->dataCsv) throw ("I Can't Found [data.csv], Try Again... ❌");
    while (std::getline(this->dataCsv, this->buffer))
    {
        this->format[this->buffer.substr(0, 10)] = this->buffer.substr(11);
    }
    //Try To Open Input File And Pars It's Elements
    this->inputFile.open(fileName.c_str(), std::ios::in);
    if (!this->inputFile) throw ("Error: could not open file ❌");
    while (std::getline(this->inputFile, this->buffer))
    {
        if (this->buffer[0])
        {
            if (this->buffer != "date | value") throw ("First Line Should Be Like [date | value] ❌");
            break;
        }
    }
    std::cout << "Data Start Proccessed" << '\n' << std::endl;
    int checker;
    while (std::getline(this->inputFile, this->buffer))
    {
        if (!buffer[0]) continue;
        checker = makeTheThingsHappened();
        if      (checker == 1) std::cout << "Error: bad input => " << buffer << " ❌" <<std::endl;
        else if (checker == 2) std::cout << "Error: too large a number ❌" << std::endl;
        else if (checker == 3) std::cout << "Error: not a positive number ❌" << std::endl;
    }
    this->dataCsv.close();
    this->inputFile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    std::cout << &other << '\n';
}

BitcoinExchange&BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::cout << &other << '\n';
    return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
    std::cout << "Task Done" << '\n';    
}
