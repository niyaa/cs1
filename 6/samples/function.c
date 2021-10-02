#include <stdio.h>

double sum(int n)
{
  double res=0;
  for(int i=1; i<n; ++i)
    res += i;
  return res;
}

int main(){
  
  double a = sum(10); // no pointers!
  printf("a=%lf\n", a);
}
