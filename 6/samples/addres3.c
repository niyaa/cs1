#include <stdio.h>

int main(){

  double a=3.141592;
  double b = 2.71;
  
  double *p = &a;
  double **pp = &p; //adress of a pointer to a
  
  printf("%lf %llu\n", a, &a);// a and address of a
  printf("%llu %lf\n", p, *p);// p and value pointed by p
  
  printf("%llu %llu\n", p, pp);// p and pp
  printf("%lf %llu %lf\n", *p, *pp, **pp);// p and pp
  
}
