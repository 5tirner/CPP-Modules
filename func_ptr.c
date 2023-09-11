#include <stdio.h>
#include <stdlib.h>
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

typedef struct an
{
    int n;
}  t_an;

void    getA(int a)
{
    printf("%d\n", a);
}
int main()
{
    t_an *a;
    a = malloc(4);
    a->n = 90;
    void (*ptr)(int);
    ptr = getA;
    (*ptr)(a->n);
}