#include <stdio.h>

int main(){

  int b; //?? might be 0
  int a=2;
  int *p; // ???
  
  printf("%d %d %d %d\n", a, &a, p, b);
  
  p = &a; //p stores an address to a
  printf("%d %d %d\n", a, &a, p);
  
}
