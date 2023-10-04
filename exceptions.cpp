#include <algorithm>
#include <iostream>

int main(int ac, char **av)
{
    try
    {
        int i = std::atoi(av[1]);
        if (i % 2 == 0)
            std::cout << i << ": Even Number\n";
        else
        {
            std::cout << "APK\n";
            throw i;
        }
    }
    catch (int num)
    {
        std::cout << num << ": Odd Number\n";
    }
}