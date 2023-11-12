/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/12 11:27:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <deque>
# include <iostream>
# include <cctype>
# include <vector>
# include <ctime>

class   PmergeMe
{
    private:
        std::deque<std::deque<int>> container2;
        std::deque<int>             toFill;
        std::deque<int>             arr1;
        std::deque<int>             arr2;
    public:
        PmergeMe(void);
        PmergeMe(std::vector<int> container1, int elements);
        PmergeMe(const PmergeMe &other);
        PmergeMe&operator=(const PmergeMe &other);
        ~PmergeMe(void);
};

void    checkArg(std::string av);
void    mergeSort(std::deque<int> arr, unsigned long start, unsigned long end);
void    merge(std::deque<int> arr, unsigned long start, unsigned long middle, unsigned long end);

#endif