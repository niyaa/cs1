#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL)); // called only once at the start
  
  double a = (10.-5.)*rand() / (double)RAND_MAX + 5.0;
  printf("%lf\n", a);
}


