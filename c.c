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

int *hio()
{

}
int main()
{
    int f = 11;
    int *ptr = &f;
    static int v = 10;
    int a = 10;
    printf("%lu\n%p\n%p\n%d\n", sizeof(ptr), &ptr, ptr, *ptr);
    //while (1);
}