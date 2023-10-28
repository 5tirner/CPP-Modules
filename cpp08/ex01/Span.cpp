/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:22:40 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/27 18:06:05 by zasabri          ###   ########.fr       */
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
    if (this->vec.size() == 0)
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

/*-----------------------------------------------------------*/