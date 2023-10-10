#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
    char *s = malloc(0);
    if (!s)
        return (1);
    s[0] = 'c';
    s[1] = 0;
   printf("%p\n", &s);
}