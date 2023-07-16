#include <iostream>

class fk
{
    public:
        void    printHello(std::string name);
};
void    fk::printHello(std::string name)
{
    std::cout << "Hello " + name << std::endl; 
}
int func(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int);
    ptr = &func;
    std::cout << &ptr << std::endl;
    std::cout << (*ptr)(9, 1) << std::endl;
    fk g;
    void    (fk::*gethello)(std::string name) = {&fk::printHello};
    (g.*gethello)("Zakaria");
}