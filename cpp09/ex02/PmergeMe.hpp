/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/09 11:07:57 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <deque>
# include <iostream>
# include <cctype>

class   PmergeMe
{
    public:
        PmergeMe(void);
        PmergeMe(std::deque<int> container1);
        PmergeMe(const PmergeMe &other);
        PmergeMe&operator=(const PmergeMe &other);
        ~PmergeMe(void);
};

void checkArg(std::string av);

#endif