#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p = (int*)malloc(6*sizeof(int));
  
  p[0] = 11;
  p[1] = 12;
  p[2] = 13;
  p[3] = 21;
  p[4] = 22;
  p[5] = 23;
  
  int *p0 = &p[0]; // *(p+i)
  int *p1 = &p[3]; // tab[][]
  
  printf("%d %d\n", p0[0], p0[1]); //11 12
  printf("%d %d\n", p1[0], p1[1]); //21 22
  
  free(p);
}
