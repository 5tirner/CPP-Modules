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

class check
{
    private:
        int h;
    public:
        void    getadd(int h)
        {
            std::cout << &h << "\n" << &this->h << std::endl;
        }
};

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