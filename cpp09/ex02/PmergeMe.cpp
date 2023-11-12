/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:13:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/12 11:33:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*Orthodox Canonical Form*/

PmergeMe::PmergeMe(void)
{
    std::cout << "PmergeMe Constructor Called" << '\n';
}

PmergeMe::PmergeMe(std::vector<int> container1, int elements)
{
    (void)elements;
    unsigned long i = 0;
    //time_t  start, end;
    //time(&start);
    while (i < container1.size())
    {
        toFill.push_back(container1[i]);
        if (toFill.size() == 2)
        {
            if (this->toFill[0] > this->toFill[1]) std::swap(this->toFill[0], this->toFill[1]);
            this->container2.push_back(this->toFill);
            this->toFill.clear();
        }
        i++;
    }
    if (toFill.size()) this->container2.push_back(toFill);
    toFill.clear();
    for (unsigned int i = 0; i < this->container2.size(); i++)
    {
        this->arr1.push_back(this->container2[i][0]);
        if (this->container2[i].size() == 2) this->arr2.push_back(this->container2[i][1]);
    }
    // std::cout << "Arr1:" << '\n';
    // for (unsigned int i = 0; i < this->arr1.size(); i++)
    //     std::cout << this->arr1[i] << '\n';
    // std::cout << "Arr2:" << '\n';
    // for (unsigned int i = 0; i < this->arr2.size(); i++)
    //     std::cout << this->arr2[i] << '\n';
    // time(&end);
    // double  time = (double)(end - start) / 1000000;
    // std::cout.precision(5);
    // std::cout << "Time to process a range of " << elements
    //           << " elements with std::[..] : " << std::fixed << time
    //           << " us" << '\n';
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