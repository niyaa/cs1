#include <stdio.h>
#include <math.h>

int main(){
  double a;
  scanf("%lf", &a);
  
  double b = sqrt(a); // 
  double c = pow(a, 1/3);//do not do this!!!
  double d = pow(a, 1./3.);
  printf(" %lf %lf %lf %lf\n", a, b, c, d);
}
