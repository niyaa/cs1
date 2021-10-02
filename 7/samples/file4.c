#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int isInCircle(double x, double y, double r);

int main()
{
  FILE *f = fopen("my_file.dat", "r");
  int a;
  double x, y;
  int n;
  
  fscanf(f, "%d", &n);
  for(int i=0; i<n; i++)
  {
    fscanf(f, "%d", &a);
    fscanf(f, "%lf", &x);
    fscanf(f, "%lf", &y);
    
    printf("%lf %lf\n", x, y);
    
    printf("Point is in circle : %d\n", isInCircle(x,y,1.0));
  }
  
  fclose(f);
}

// Assume the circle is at 0,0
int isInCircle(double x, double y, double r)
{
  return x*x + y*y < r*r;
}
