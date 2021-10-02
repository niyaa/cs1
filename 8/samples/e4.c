//Question 4 from the example test
#include <stdio.h>
#include <math.h>

double fun4(double a, double b, double c)
{
  double s =0;
  for(int i=1; i<=40; ++i)
  {
    s += a * exp( 1.0/(i+1.0) ) + 1.0/b;
  }
  return s;
}

int main()
{
  
}
