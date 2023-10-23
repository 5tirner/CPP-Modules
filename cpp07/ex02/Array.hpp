/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/23 14:12:47 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
    private:
        T            *elements;
        unsigned int elements_size;
    public:
        Array(void)
        {
            std::cout << "Array Constructor Called" << '\n';
            elements = NULL;
        }
        Array(unsigned int n)
        {
            std::cout << "Array Paramitrize One Called" << '\n';
            try
            {
                elements = new T[n];
            }
            catch(std::bad_alloc &ba)
            {
                std::cout << ba.what() << '\n';
            }
            this->elements_size = n;
        }
        Array(const Array &other)
        {
            *this = other;
        }
        Array&operator=(const Array &other)
        {
            std::cout << "Array Assignment Called" << '\n';
            if (other.elements)
            {
                if (!this->elements)
                {
                    this->elements = new T;
                    *(this->elements) = *(other.elements);
                    this->elements_size = other.elements_size;
                }
                else
                {
                    delete this->elements;
                    this->elements = new T;
                    *(this->elements) = *(other.elements);
                    this->elements_size = other.elements_size;
                }
            }
            return (*this);
        }
        ~Array(void)
        {
            std::cout << "Array Destructor" << '\n';
            if (this->elements)
            {
                delete this->elements;
            }
        }
};

#endif