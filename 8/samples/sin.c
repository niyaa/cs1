#include <stdio.h>
#include <math.h>

//prepere data from 0 to 2Pi
#define PI 4.0*atan(1.0)

int main()
{
  double x_min=0;
  double x_max=2.0*PI, x=x_min, y;
  int n;
  scanf("%d",&n); //Number of points to generate
  FILE *fp = fopen("sin.dat", "w");
  double h=(x_max-x_min)/(n-1.0);
  for(int i=0; i<n; ++i)
  {
    x = x_min+i*h;
    y = sin(x);
    printf("%lf, %lf\n", x, y);
    fprintf(fp,"%lf, %lf\n", x, y);
  }
  fclose(fp);
}
