#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *makestr(char *s, int f, int l)
{
    int i = 0;
    char *n = malloc(strlen(s) + 1);
    if (!n)
        exit(1);
    while (l >= f)
    {
        n[i] = s[l];
        i++;
        l--;
    }
    n[i] = '\0';
    return (n);
}

char *makestr2(char *s, int f, int l)
{
    int i = 0;
    char *n = malloc(strlen(s) + 1);
    if (!n)
        exit(1);
    while (f <= l)
    {
        n[i] = s[f];
        i++;
        f++;
    }
    n[i] = '\0';
    return (n);
}

int main()
{
    char s[10001];
    scanf("%s", s);
    int i = 0, j;
    char *checker, *checker2;
    while (s[i])
    {
        j = strlen(s) - 1;
        while (j >= i)
        {
            checker = makestr(s, i, j);
            checker2 = makestr2(s, i, j);
            if (!strcmp(checker, checker2) && strlen(checker) > 2)
            {
                printf("[%s]\n", checker);
                i = j;
                break;
            }
            checker = NULL;
            j--;
        }
        i++;
    }
}
