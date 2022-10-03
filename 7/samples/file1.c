#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
  FILE *f = fopen("my_file.dat", "w");
  
  int n = 100;
  double x, y;
  const double pi = 4 * atan(1.0);
  double h = (2*pi - 0.0) / (double) n;
  
  for(int i=0; i<n; i++)
  {
    x = 0.0 + i*h;
    y = sin(x);
    printf("%d %lf %lf \n", i, x, y);
    fprintf(f, "%d %lf %lf \n", i, x, y);
  }
  
  fclose(f);
}


