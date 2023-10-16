#include <iostream>

int input()
{
    int a;
    std::cin >> a;
    if (a < 0)
        throw a;
    std::cout << "Cin Get Positive\n";
    return (a);
}
int prompt()
{
    std::cout << "Enter a number: ";
    int a = input();
    std::cout << "Input done\n";
    return (a);
}
int positive()
{
    int a = prompt();
    std::cout << "Number Getted\n";
    return (a);
}
int main()
{
    try
    {
        int a = positive();
        std::cout << a << " Is Positive Number\n";
    }
    catch(...)
    {
        std::cout << "Number Is Not Positive\n";
    }
}