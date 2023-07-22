#include <stdio.h>
#include <stdlib.h>

int is_98(int elem)
{
    return (98 == elem);
}

void    print(char *s)
{
    int i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
int main()
{
    //printf("%kk\n");
    printf("%d\n", -2147483648);
}