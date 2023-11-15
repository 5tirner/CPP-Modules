/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/15 10:44:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <deque>
# include <iostream>
# include <cctype>
# include <vector>
# include <ctime>
# include <sys/time.h>

class   PmergeMe
{
    private:
        std::vector<std::vector<int> > vec;
        std::deque<std::deque<int> > deque;
    public:
        PmergeMe(void);
        PmergeMe(std::vector<int> container1, int elements);
        PmergeMe(std::deque<int> container2, int elements);
        PmergeMe(const PmergeMe &other);
        PmergeMe&operator=(const PmergeMe &other);
        ~PmergeMe(void);
};

void    checkArg(std::string av);
template<typename T>
void    mergeSort(T &arr, unsigned long start, unsigned long end);
template<typename T>
void    devideAndConquer(T &arr, unsigned long start,
        unsigned long middle, unsigned long end);

#endif