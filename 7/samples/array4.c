#include <stdio.h>

int main(){
  int tabA[3]; // an array of 3 int
  
  tabA[0] = 3;
  tabA[1] = 9;
  tabA[2] = 5;
  
  printf("the 0 %d\n", *tabA); //3
  printf("the 1 %d\n", *(tabA+1));//9
  printf("the 2 %d\n", *(tabA+2));//5
  printf("----\n");
  
  int *p=tabA; // could be p=tabA
  printf("the 0 %d\n", *p);
  printf("the 1 %d\n", *(p+1));
  printf("the 2 %d\n", *(p+2));
  printf("----\n");  
}
