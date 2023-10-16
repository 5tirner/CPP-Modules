#include <string.h>

void f()
{
}
int main()
{
    char *s = strdup("hello");
    char *s2 = strdup("hello");
    f();
    system("leaks a.out");
}