#include <stdio.h>

void maxmin(int a, int b, int c, int *pmax, int *pmin)
{
  int max=0;
  if(a >=b && a >= c)  max = a;
  if(b >=a && b >= c)  max = b;
  if(c >=b && c >= a)  max = c;
  
  int min=0;
  if(a <=b && a <= c) min = a;
  if(b <=a && b <= c) min = b;
  if(c <=b && c <= a) min = c;
  
  *pmax = max;
  *pmin = min;
}

int main(){
  
  int a=9, b=90, c =-98;
  int max, min;
  maxmin(a,b,c, &max, &min); //& must be there
  printf("%d %d\n", max, min);
}
