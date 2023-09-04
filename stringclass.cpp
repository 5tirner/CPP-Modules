#include <iostream>
#include <vector>

int main()
{
     std::vector<std::string> board(30);
    int i = 0;
    while (i < 9)
    {
        board.push_back("000000000");
        i++;
    }
    i = 0;
    while (i < 9)
    {
        std::cout << board.capacity() << '\n';
        i++;
    }
}