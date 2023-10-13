#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = malloc(0);
    int i = 0;
    while (i < 10)
    {
        s[i] = 'a';
        i++;
    }
    s[i] = '\0';
}