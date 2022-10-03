#include <stdio.h>
#include <math.h>

int main(){
  double a;
  scanf("%lf", &a);
  
  double b = pow(a, 2);//a^2 => a*a
  double c = pow(a, 2.31);//a^2 => ???
  printf(" %lf %lf %lf\n", a, b, c);
}
