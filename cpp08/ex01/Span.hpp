/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:49:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/29 04:54:38 by zasabri          ###   ########.fr       */
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
        const int&operator[](long index) const;
        /*Shortest And Longest Spans*/
        int shortestSpan(void) const;
        int longestSpan(void) const;
        /*Add Many Elements*/
        template<typename T>void   addToMuchElements(T *elements, unsigned int elementsSize);
};

#endif