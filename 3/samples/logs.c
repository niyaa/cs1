#include <stdio.h>
#include <math.h>

int main(){
  double a;
  scanf("%lf", &a);
  
  double b = log(a); // 
  double c = log10(a);
  printf(" %lf %lf %lf\n", a, b, c);
}
