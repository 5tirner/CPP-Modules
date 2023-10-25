/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/25 01:05:13 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// void    addFront(t_ac **list, uintptr_t val)
// {
//     t_ac    *r = new t_ac;
//     r->address = val;
//     if (!(*list))
//     {
//         r->next = NULL;
//         *list = r;
//     }
//     else
//     {
//         r->next = *list;
//         *list = r;
//     }
// }

void func()
{
    class Array<int> A(5);
    int i = 0;
    while (i < 5)
    {
        try
        {
            A[i] = i;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        i++;
    }
    while (i >= 0)
    {
        try
        {
            std::cout << A[i] << '\n';
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        i--;
    }
    std::cout << "-----------------------------------------------------\n";
    class Array<int> B(A);
    i = 0;
    while (i < 10)
    {
        try
        {
            std::cout << B[i] << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        i++;
    }
    std::cout << "-----------------------------------------------------\n";
    class Array<int> C(2);
    i = 0;
    while (i < 2)
    {
        C[i] = i;
        i++;
    }
    B = C;
    while (i >= 0)
    {
        try
        {
            std::cout << B[i] << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        i--;
    }
}
const char  *BadMemory::what() const throw()
{
    return ("Bad Memory");
}
int main()
{
    //int *a = new int();
    //std::cout << *a << '\n';
    func();
   // system("leaks Array");
}