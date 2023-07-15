#include <stdio.h>
#include <stdlib.h>

int     *array_range(int min, int max)
{
        int     *arr;
        int     i;

        if (min > max)
                return (NULL);
        arr = malloc(4 * (max - min));
        if (!arr)
                return (NULL);
        i = 0;
        while (min <= max)
        {
                arr[i] = min;
                min++;
                i++;
        }
        return (arr);
}
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}