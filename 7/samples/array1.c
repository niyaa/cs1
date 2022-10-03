#include <stdio.h>

int main(){
  int tabA[3]; // an array of 3 int
  
  tabA[0] = 3;
  tabA[1] = 9;
  tabA[2] = 5;
  //tabA[3] = 7; //This is out of bounds for us
  
  printf("%d\n", tabA[0]);
  printf("%d\n", tabA[1]);
  printf("%d\n", tabA[2]);
  //printf("%d\n", tabA[3]);
}
