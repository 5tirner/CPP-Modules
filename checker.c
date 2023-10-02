#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    printf("mode RDWR: %d\n", O_RDWR);
    printf("take this: %d\n", (O_RDONLY && O_WRONLY));
    printf("take this: %d\n", (O_WRONLY << 1));
    printf("take this: %d\n", 1 << 1);
    printf("take this: %d\n", (O_RDONLY + O_WRONLY));
    printf("take this: %d\n", 3 | 2);
    printf("take this: %d\n", (O_RDONLY | O_WRONLY));
    printf("take this: %d\n", 2);
    printf("take this: %d\n", 1);
    printf("take this: %d\n", 3);
    printf("take this: %d\n", O_RDONLY);
    printf("take this: %d\n", (O_RDONLY << 1));
    printf("take this: %d\n", 3 & 2);
    printf("take this: %d\n", (O_RDONLY & O_WRONLY));
    printf("take this: %d\n", O_WRONLY);
    printf("take this: %d\n", 0);
}