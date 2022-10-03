#include <stdio.h>
#include <math.h>
#define PI 4.0*atan(1.0)
double L = 2.0*PI;

double fun(double x, int n)
{
  double sum=0;
  for(int i=1; i<=n; ++i)
  {
    sum += 1.0/(double)i * sin( i * PI * x / L );
  }
  sum *= 4.0/PI; 
}

int main(){
  double x=0, value;
  double h=0.001;
  int no_steps=1000;
  for(int i=0; i< no_steps; ++i)
  {
    value = fun(x, 5);
    x += h;
    printf("%lf, %lf \n", x, value);
  }
}
