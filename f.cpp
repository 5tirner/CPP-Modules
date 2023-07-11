#include <iostream>

int main()
{
    std::string h = "try";
    std::string &e = h;
    std::cout << &h << "\n";
    std::cout << &e << "\n";
    std::string j = "pp";
    e = j;
    std::cout << e << "\n" << &e <<"\n";
}