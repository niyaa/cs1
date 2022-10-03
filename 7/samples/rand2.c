#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("%d\n", time(NULL));
  srand(time(NULL));
  int a = rand(); //only ints
  printf("a=%d, RAND_MAX=%d\n", a, RAND_MAX);
  printf("a=%d, RAND_MAX=%d\n", rand(), RAND_MAX);
}


