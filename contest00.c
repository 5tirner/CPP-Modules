#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *add_char(char *str, char c)
{
    char *new;
    if (!str)
    {
        new = malloc(3);
        new[0] = c;
        new[1] = 0;
    }
    else
    {
        new = malloc(strlen(str) + 2);
        int i = 0;
        while (str[i])
        {
            new[i] = str[i];
            i++;
        }
        new[i] = c;
        new[i + 1] = 0;
        free(str);
    }
    //dprintf(2, "[%s\n]", new);
    return (new);
}

int check_for_vika(char **str, int len, int col)
{
    int i = 0;
    char *found;
    int count  = 0;
    int c = 'v';
    found = NULL;
    if (col == 1)
    {
        if (strstr(str[0], "vika"))
            return 1;
        else
            return 0;
    }
    dprintf(2,"%d\n", len);
    while (i < len - 1)
    {
        int j = 0;
        while (str[j])
        {
            printf("-->%s\n", str[j]);
            if (str[j][i] == 'v' && c == 'v' && count == 0)
            {
                found = add_char(found, 'v');
                c = 'i';
                count = 1;
            }
            if (str[j][i] == 'i' && c == 'i' && count == 1)
            {
               found = add_char(found, 'i');
                c = 'k';
                count = 2;
            }
            if (str[j][i] == 'k' && c == 'k' && count == 2)
            {
                found = add_char(found, 'k');
                c = 'a';
                count = 3;
            }
            if (str[j][i] == 'a' && c == 'a' && count == 3)
            {
                found = add_char(found, 'a');
                c = 'z';
                count = 100;
            }
            printf("[%c]\n", str[j][i]);
            j++;
        }
        i++;
    }
    if (strstr(found, "vika"))
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    int g = 0;
    int arr[5];
    while (g < t)
    {
            int a, b;
            scanf("%d %d\n", &a, &b);
            int i = 0;
            char **str = (char **)malloc(sizeof(char *) * (a + 1));
            while (i < a)
            {
                char s[b];
                scanf("%s", s);
                str[i] = strdup(s);
                i++;
            }
            str[i] = NULL;
            arr[g] = check_for_vika(str, b, a);
            g++;
    }
    g = 0;
    while (g < t)
    {
        if (arr[g] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}