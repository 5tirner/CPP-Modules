/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:22:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/29 03:46:55 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
    std::cout << "Span Constructor Called" << '\n';
    this->vecSize = 0;
}

Span::Span(unsigned int n)
{
    std::cout << "Span Copy One Called" << '\n';
    try
    {
        this->vec.reserve(n);
        this->vecSize = n;
    }
    catch(std::length_error &e)
    {
        std::cerr << e.what() << '\n';
    }
}

Span::Span(const Span &other)
{
    std::cout << "Span Assignement One Called" << '\n';
    try
    {
        this->vec.reserve(other.vecSize);
        this->vecSize = other.vecSize;
    }
    catch(std::length_error &e)
    {
        std::cerr << e.what() << '\n';
    }
}

Span    &Span::operator=(const Span &other)
{
    std::cout << "Span Assignement One Called" << '\n';
    if (this->vec.size() != 0)
        this->vec.clear();
    try
    {
        this->vec.reserve(other.vecSize);
        this->vecSize = other.vecSize;
    }
    catch(std::length_error &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (*this);
}

Span::~Span(void)
{
    std::cout << "Span Destructor Called" << '\n';
    if (this->vec.size() == 0)
        this->vec.clear();
}
/*---------------------------------------------------------*/

void    Span::addNumber(int number)
{
    if (this->vec.size() == this->vecSize)
        throw ("The Span Is Full");
    if (std::find(vec.begin(), vec.end(), number) != vec.end())
    {
        std::cout << number << " Is Already Found" << '\n';
        throw ("Element Already In");
    }
    this->vec.push_back(number);
}

/*-----------------------------------------------------------*/

int &Span::operator[](long index)
{
    if (index < 0 || index >= this->vecSize)
        throw ("Out Of Range");
    return (this->vec[index]);
}

const int&Span::operator[](long index) const
{
    if (index < 0 || index >= this->vecSize)
        throw ("Out Of Range");
    return (this->vec[index]);
}

/*-----------------------------------------------------------*/

int Span::shortestSpan(void) const
{
    if (this->vec.size() <= 1)
        throw ("No Enogh Element, This Method Is Useless");
    std::vector<int>saver = this->vec;
    std::sort(saver.begin(), saver.end());
    int first = saver[0], second = saver[1];
    int min = second - first;
    for (unsigned long i = 2; i < saver.size(); i++)
    {
        if (saver[i] - saver[i - 1] < min)
        {
            min = saver[i] - saver[i - 1];
            first = saver[i - 1];
            second = saver[i];
        }
    }
    std::cout << "The Distance Of The Shortest Span Is: "
              << std::abs(std::distance(std::find(this->vec.begin(), this->vec.end(), first),
                 std::find(this->vec.begin(), this->vec.end(), second))) << '\n'
              << "The Value Is: ";
    return (second - first);
}

int Span::longestSpan(void) const
{
    if (this->vec.size() <= 1)
        throw ("No Enogh Element, This Method Is Useless");
    std::vector<int>saver = this->vec;
    std::sort(saver.begin(), saver.end());
    int first = saver[0], second = saver[saver.size() - 1];
    std::cout << "The Distance Of The Shortest Span Is: "
              << std::distance(std::find(this->vec.begin(), this->vec.end(), first),
                 std::find(this->vec.begin(), this->vec.end(), second)) << '\n'
              << "The Value Is: ";
    return (second - first);
}

/*---------------------------------------------------------*/