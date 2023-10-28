/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:49:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/27 17:43:05 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class   Span
{
    private:
        std::vector<int>vec;
        unsigned int    vecSize;
    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span &other);
        Span&operator=(const Span &other);
        ~Span(void);
        /*Add Numbers*/
        void    addNumber(int number);
        /*Operator []*/
        int &operator[](long inedx);
};

#endif