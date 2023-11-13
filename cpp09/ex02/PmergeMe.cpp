/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:13:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/13 16:18:12 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*inserting and final sort*/

template <typename T>
void inserting(T &container1, T &arr1, T &arr2)
{
    unsigned long i = 0, i1 = 0, i2 = 0;
    while (i1 < arr1.size() && i2 < arr2.size())
    {
        if (arr1[i1] < arr2[i2])
        {
            container1[i] = arr1[i1];
            i1++;
        }
        else
        {
            container1[i] = arr2[i2];
            i2++;
        }
        i++;
    }
    while (i1 < arr1.size())
    {
        container1[i] = arr1[i1];
        i1++;
        i++;
    }
    while (i2 < arr2.size())
    {
        container1[i] = arr2[i2];
        i2++;
        i++;
    }
}

/*divide-and-conquer-and-sorting*/
template <typename T>
void    devideAndConquer(T &arr, unsigned long start,
        unsigned long middle, unsigned long end)
{
    unsigned long part1 = middle - start + 1, part2 = end - middle, i = -1;
    int subarr1[part1], subarr2[part2];
    while (++i < part1)
        subarr1[i] = arr[start + i];
    i = -1;
    while (++i < part2)
        subarr2[i] = arr[middle + 1 + i];
    unsigned long i1 = 0, i2 = 0, merger = start;
    while (i1 < part1 && i2 < part2)
    {
        if (subarr1[i1] < subarr2[i2])
        {
            arr[merger] = subarr1[i1];
            i1++;
        }
        else
        {
            arr[merger] = subarr2[i2];
            i2++;
        }
        merger++;
    }
    while (i1 < part1)
    {
        arr[merger] = subarr1[i1];
        i1++;
        merger++;
    }
    while (i2 < part2)
    {
        arr[merger] = subarr2[i2];
        i2++;
        merger++;
    }
}

/*Merge*/

template <typename T>
void    mergeSort(T &arr, unsigned long start, unsigned long end)
{
    if (start >= end)
        return ;
    unsigned long middle = start + (end - start) / 2;
    mergeSort(arr, start, middle);
    mergeSort(arr, middle + 1, end);
    devideAndConquer(arr, start, middle, end);
}

/*Orthodox Canonical Form*/

PmergeMe::PmergeMe(void)
{
    std::cout << "PmergeMe Constructor Called" << '\n';
}

/*Paramitrize 1*/

PmergeMe::PmergeMe(std::vector<int> container1, int elements)
{
    unsigned long i = 0;
    clock_t start = clock();
    std::cout << "Before: ";
    for (unsigned int i = 0; i < 5 && i < container1.size(); i++)
        std::cout << container1[i] << ' ';
    if (container1.size() > 5)
        std::cout << "[...]";
    std::cout << '\n';
    if (container1.size() > 1)
    {
        std::vector<int> toFill, arr1, arr2;
        while (i < container1.size())
        {
            toFill.push_back(container1[i]);
            if (toFill.size() == 2)
            {
                if (toFill[0] > toFill[1])
                    std::swap(toFill[0], toFill[1]);
                this->vec.push_back(toFill);
                toFill.clear();
            }
            i++;
        }
        if (toFill.size())
            this->vec.push_back(toFill);
        for (unsigned int i = 0; i < this->vec.size(); i++)
        {
            arr1.push_back(this->vec[i][0]);
            if (this->vec[i].size() == 2)
                arr2.push_back(this->vec[i][1]);
        }
        mergeSort(arr1, 0, arr1.size() - 1);
        mergeSort(arr2, 0, arr2.size() - 1);
        inserting(container1, arr1, arr2);
    }
    std::cout << "After:  ";
    for (unsigned int i = 0; i < 5 && i < container1.size(); i++)
        std::cout << container1[i] << ' ';
    if (container1.size() > 5)
        std::cout << "[...]";
    std::cout << '\n';
    clock_t end = clock();
    double time = (end - start) / (double)CLOCKS_PER_SEC;
    std::cout.precision(5);
    std::cout << "Time to process a range of" << elements
              << " elements with std::[..] : "
              << std::fixed << time << " us"<< '\n';
}

/*Paramitrize 2*/

PmergeMe::PmergeMe(std::deque<int> container2, int elements)
{
    unsigned long i = 0;
    clock_t start = clock();
    std::cout << "Before: ";
    for (unsigned int i = 0; i < 5 && i < container2.size(); i++)
        std::cout << container2[i] << ' ';
    if (container2.size() > 5)
        std::cout << "[...]";
    std::cout << '\n';
    if (container2.size() > 1)
    {
        std::deque<int> toFill, arr1, arr2;
        while (i < container2.size())
        {
            toFill.push_back(container2[i]);
            if (toFill.size() == 2)
            {
                if (toFill[0] > toFill[1])
                    std::swap(toFill[0], toFill[1]);
                this->deque.push_back(toFill);
                toFill.clear();
            }
            i++;
        }
        if (toFill.size())
            this->deque.push_back(toFill);
        for (unsigned int i = 0; i < this->deque.size(); i++)
        {
            arr1.push_back(this->deque[i][0]);
            if (this->deque[i].size() == 2)
                arr2.push_back(this->deque[i][1]);
        }
        mergeSort(arr1, 0, arr1.size() - 1);
        mergeSort(arr2, 0, arr2.size() - 1);
        inserting(container2, arr1, arr2);
    }
    std::cout << "After:  ";
    for (unsigned int i = 0; i < 5 && i < container2.size(); i++)
        std::cout << container2[i] << ' ';
    if (container2.size() > 5)
        std::cout << "[...]";
    std::cout << '\n';
    clock_t end = clock();
    double time = (end - start) / (double)CLOCKS_PER_SEC;
    std::cout.precision(5);
    std::cout << "Time to process a range of" << elements
              << " elements with std::[..] : "
              << std::fixed << time << " us"<< '\n';
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

PmergeMe::~PmergeMe(void) {}