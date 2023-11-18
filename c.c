#include <stdio.h>

int var;
/*heap->malloc, stack, data segment*/
void func(int a)
{
    if (a == 50)
    {
        int v = 9;
    }
    var = 10;
    printf("%d\n", a);
}

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
int main()
{
    int fd;
    char s[5];
    fd = open("AAAAA", O_CREAT | O_RDWR, 0777);
    printf("%d\n",fd);
    write(fd, "hello\n", 6);
    close(fd);
    write(fd, "t", 1);
}