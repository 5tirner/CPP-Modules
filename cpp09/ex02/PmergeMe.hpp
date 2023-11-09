/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:11:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/09 10:12:45 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <iostream>

class   PmergeMe
{
    private:
    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &other);
        PmergeMe&operator=(const PmergeMe &other);
        ~PmergeMe(void);
};

#endif