#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = rand(); //only ints
  printf("a=%d, RAND_MAX=%d\n", a, RAND_MAX);
  printf("a=%d, RAND_MAX=%d\n", rand(), RAND_MAX);
  
}


