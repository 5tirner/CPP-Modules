#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void print()
{
    printf("hello\n");
}

int main()
{
    void (*try)();
    try = &print;

    (*try)();    
}