/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/23 17:00:59 by zasabri          ###   ########.fr       */
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
        unsigned int elementsSize;
    public:
        Array(void)
        {
            std::cout << "Array Constructor Called" << '\n';
            elements = NULL;
            elementsSize = 0;
        }
        Array(unsigned int n)
        {
            std::cout << n << '\n';
            std::cout << "Array Paramitrize One Called" << '\n';
            try
            {
                this->elements = new T[n];
            }
            catch(std::bad_alloc &ba)
            {
                std::cout << ba.what() << '\n';
            }
            this->elementsSize = n;
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
                    this->elements = new T[other.elementsSize];
                    *(this->elements) = *(other.elements);
                }
                else
                {
                    delete this->elements;
                    this->elements = new T[other.elementsSize];
                    *(this->elements) = *(other.elements);
                }
                this->elementsSize = other.elements_size;
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
        int &operator[](long index)
        {
            if (index < 0 || index >= this->elementsSize)
                throw ("Access To Bad Memory");
            return (this->elements[index]);
        }
};

#endif