/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:13:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/11 03:27:02 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <utility>

/*Orthodox Canonical Form*/

PmergeMe::PmergeMe(void)
{
    std::cout << "PmergeMe Constructor Called" << '\n';
}

PmergeMe::PmergeMe(std::list<int> container1)
{
    std::list<int>::iterator it = container1.begin();
    while (it != container1.end())
    {
        toFill.push_back(*it);
        if (toFill.size() == 2)
        {
            if (this->toFill[0] > this->toFill[1]) std::swap(this->toFill[0], this->toFill[1]);
            this->container2.push_back(this->toFill); this->toFill.clear();
        }
        it++;
    }
    for (unsigned int i = 0; i < this->container2.size(); i++)
    {
        std::cout << "[ ";
        for (unsigned int j = 0; j < this->container2[i].size(); j++)
        {
            std::cout << this->container2[i][j] << ' ';
        }
        std::cout << "]\n";
    }
    std::cout << '\n';
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    std::cout << &other << '\n';
}

PmergeMe&PmergeMe::operator=(const PmergeMe &other)
{
    std::cout << &other << '\n';
    return (*this);
}

PmergeMe::~PmergeMe(void)
{
}