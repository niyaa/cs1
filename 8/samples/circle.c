#include <stdio.h>
#include <math.h>

//prepere data from 0 to 2Pi
#define PI 4.0*atan(1.0)

int main()
{
  FILE *fp = fopen("sin.dat", "r");
  
  int n;
  fscanf(fp, "%d", &n);
  printf("n=%d\n", n);
  
  double x, y;
  for(int i=0; i<n; ++i)
  {
    fscanf(fp, "%lf, %lf", &x, &y); // read the exact number of variables that are in a line
    printf("i=%d x=%lf y=%lf \n", i, x, y);
    if( x*x+y*y <= 1.0 )
      printf("In a circle\n");
    else
      printf("NOT in a circle\n");
  }
  
  fclose(fp);
}
