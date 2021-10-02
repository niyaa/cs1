#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p = (int*)malloc(6*sizeof(int)); //the size will be calculates somehow
  
  p[0] = 0; //just like 1D array
  p[1] = 2;
  p[2] = 5;
  p[3] = 9;
  p[4] = 2;
  p[5] = 5;
  
  printf("%d %d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4], p[5]);
  printf("%p %p %p %p %p %p\n", p, p+1, p+2, p+3, p+4, p+5);
  
  
  free(p); // this has to be here
}






