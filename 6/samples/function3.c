#include <stdio.h>

void sum(int n, double *result)
{
  printf("%lf, %p\n", *result, result);
  
  double res=0;
  for(int i=1; i<n; ++i)
    res += i;
  *result = res;
  printf("%lf, %p\n", *result, result);
}

int main(){
  
  double b=0;
  printf("%lf, %p\n", b, &b);
  
  
  sum(10, &b); // no pointers!
  printf("%lf, %p\n", b, &b);
}
