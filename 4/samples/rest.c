#include <stdio.h>
#include <math.h>

int main(){
  double a;
  scanf("%lf", &a);
  
  double b = ceil(a);
  double c = floor(a);
  double d = fabs(a);
  printf(" %lf %lf %lf %lf\n", a, b, c, d);
}
