#include <stdio.h>

void print(int a)
{
    a += 32;
    printf("%c\n", a);
}

int main()
{
    void (*try)(int);
    try = &print;

    (*try)('A');    
}