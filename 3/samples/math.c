#include <stdio.h>
#include <math.h>

int main(){
  double a;
  scanf("%lf", &a);
  
  double b = sin(a);
  printf(" sin(%lf)=%lf\n", a, b);
}
