#include <stdio.h>

int main()
{
  int tab[2][3];
  printf("%p %p %p\n", &tab[0][0], &tab[0][1], &tab[0][2]);
  printf("%p %p %p\n", &tab[1][0], &tab[1][1], &tab[1][2]);
}
