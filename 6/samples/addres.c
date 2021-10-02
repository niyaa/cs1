#include <stdio.h>

int main(){
  int a=100;
  int b=200;
  int c=300;
  
  char d='a';
  //printf("%llu %llu %llu %llu\n", &a, &b, &c, &d);
  printf("%d\n", sizeof(int*));
  printf("%d\n", sizeof(double*));
  printf("%d\n", sizeof(char*));
  
}
