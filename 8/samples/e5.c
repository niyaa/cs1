//Question 5 from the example test
#include <stdio.h>
#include <math.h>

double fun5(int n)
{
  double s =0;
  double x0=2.0;
  double x1=x0, x2;
  for(int i=1; i<=n; ++i)
  {
    x2 = -0.5 * x1 * sqrt(fabs(x1));
    x1 = x2;
    s += pow(-1, i-1)*1.0/x1;
  }
  return exp(s);
}

int main()
{
  double a = fun5(11);
  printf("%lf\n", a);
}
