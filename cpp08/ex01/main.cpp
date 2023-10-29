/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:48:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/29 03:44:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "Create A Span\n";
    Span sp = Span(5);
    std::cout << "Add Numbers\n";
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch(const char *err)
    {
        std::cerr << err << '\n';
    }
    
    std::cout << "Print1\n";
    for (unsigned long i = 0; i < 5; i++)
    {
        std::cout << "Element" << i << ": " << sp[i] << '\n';
    }
    std::cout << "Print Done.\n";
    std::cout << "Try To find Spans\n";
    try
    {
        std::cout << "Shortest Span: ";
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: ";
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char *err)
    {
        std::cerr << err << '\n';
    }
    return (0);
}