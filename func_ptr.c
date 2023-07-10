#include <stdio.h>

// void print(int a)
// {
//     a += 32;
//     printf("%c\n", a);
// }

// int main()
// {
//     void (*try)(int);
//     try = &print;

//     (*try)('A');    
// }

int main(int ac, char **av)
{
    int i = 0;
    while (av[i])
        i++;
    printf("%d\n", i);
}