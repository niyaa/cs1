#include <stdio.h>
#include <math.h>

int main(){
  int a =5;
  int b =1 , c =2;
  int d = b > c ? a + b : a + c ; //d=7
  
  printf("%d %d %d %d\n", a, b, c, d);
  d = b < c ? a + b : a + c ; //d=6
  printf("%d %d %d %d\n", a, b, c, d);
  
  printf("b<c  %s \n", b<c ? "true" : "false");
  printf("b>c  %s \n", b>c ? "true" : "false");
}
