// #include "cpp04/ex01/Animal.hpp"
// #include <iostream>
// class A
// {
//     public:
//         A()
//         {
//             std::cout << "const call";
//         }
//         A(const A&)
//         {
//             std::cout << "Copy done" << '\n';
//         }
// };

// A func()
// {
//     return (A());
// }
// int main()
// {
//     A c = func();
// }

#include <iostream>

std::string f()
{
    std::string i;
    std::cout << "=>" << &i << std::endl;
    return i;
}


int main()
{
    std::string i = f();
    std::cout << "=>" << &i << std::endl;

}

