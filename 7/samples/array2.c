#include <stdio.h>

int main(){
  int tabA[3]; // an array of 3 int
  
  tabA[0] = 3;
  tabA[1] = 9;
  tabA[2] = 5;
  //tabA[3] = 7; //This is out of bounds for us
  
  printf("the 0 %p\n", &tabA[0]);
  printf("the 1 %p\n", &tabA[1]);
  printf("the 2 %p\n", &tabA[2]);
  //printf("%d\n", tabA[3]);
}
