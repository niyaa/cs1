#include <stdio.h>

int main(){

  double a=45681.155155e39;
  int* p = (int*)&a;
  
  printf("%lf\n", a);
  *p = 8; //a=??
  printf("%lf\n", a);
  
  *(p+1)=0;//a ==??
  printf("%lf\n", a);
}
