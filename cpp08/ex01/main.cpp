/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:48:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/29 05:02:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "Main Tests\n";
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "\n---------------------------------" << '\n';
    std::cout << "My Test\n";
    std::cout << "1: Create A Span\n";
    Span test = Span(10000);
    std::cout << "2: Add Numbers\n";
    for (int i = 0; i < 10000; i++)
    {
        try
        {
            test.addNumber(i);
        }
        catch(const char *err)
        {
            std::cerr << err << '\n';
        }
    }
    // std::cout << "3: Print\n";
    // for (unsigned long i = 0; i < 10000; i++)
    // {
    //     std::cout << "Element" << i << ": " << test[i] << '\n';
    // }
    // std::cout << "4: Print Done.\n";
    std::cout << "5: Try To find Spans\n";
    try
    {
        std::cout << "Shortest Span: ";
        std::cout << test.shortestSpan() << std::endl;
        std::cout << "Longest Span: ";
        std::cout << test.longestSpan() << std::endl;
    }
    catch(const char *err)
    {
        std::cerr << err << '\n';
    }
    std::cout << "6: By Using Assignement Copy Test On sp\n";
    sp = test;
    return (0);
}