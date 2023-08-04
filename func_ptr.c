#include <stdio.h>
#include "limits.h"
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
int main()
{
    printf("%llu\n", ULLONG_MAX + 1);
}