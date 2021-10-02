#include <stdio.h>

int main(){
  int tabA[3]; // an array of 3 int
  
  tabA[0] = 3;
  tabA[1] = 9;
  tabA[2] = 5;
  
  printf("the 0 %p\n", &tabA[0]);
  printf("the 1 %p\n", &tabA[1]);
  printf("the 2 %p\n", &tabA[2]);
  printf("----\n");
  
  int *p=&tabA[0]; // could be p=tabA
  printf("the 0 %p\n", p);
  printf("the 1 %p\n", p+1);
  printf("the 2 %p\n", p+2);
  printf("----\n");
  
  printf("the 0 %p\n", tabA);
  printf("the 1 %p\n", tabA+1);
  printf("the 2 %p\n", tabA+2);
  
}
