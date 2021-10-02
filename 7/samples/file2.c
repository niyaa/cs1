#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a;  
  FILE *f = fopen("data.dat", "wr");
  fscanf(f, "%d", &a);
  printf("%d\n", a);

  fscanf(f, "%d", &a);
  printf("%d\n", a);
  
  fscanf(f, "%d", &a);
  printf("%d\n", a);
  
  fclose(f);
}


