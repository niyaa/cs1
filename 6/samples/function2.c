#include <stdio.h>

double sum(int n, double *result)
{
  double res=0;
  for(int i=1; i<n; ++i)
    res += i;
  *result = res;
  return res;
}

int main(){
  
  double b=0;
  double a = sum(10, &b); // no pointers!
  printf("a=%lf %lf\n", a, b);
}
