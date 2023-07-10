#include <iostream>

int main()
{
    // std::string t = "hello";
    // std::string &p = t;
    // std::cout << t << &t <<std::endl;
    // std::string j = "try";
    // p = j;
    // std::cout << p << t << &p << std::endl;
    std::string test = new char[2];
    test[0] = 'k';
    test[1] = '\0';
    std::cout << test <<std::endl;
}