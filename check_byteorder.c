#include <stdio.h>

int checker()
{
  unsigned int x = 1;
  char *c = (char*) &x;
  return (int)*c;
}

int main()
{
    int n = checker();
    printf("n => %d so: byte order is: ", n);
    if (n == 0)
        printf("big endien\n");
    else
        printf("little endien\n");
}