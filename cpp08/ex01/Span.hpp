/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:49:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 11:36:56 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

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