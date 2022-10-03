#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
  double x, y;
  int n, m=0;
  
  FILE *f = fopen("points.dat", "r");
  fscanf(f, "%d", &n);
  printf("%d\n", n);
  
  for(int i=0; i<n; ++i)
  {
    fscanf(f, "%lf %lf", &x, &y);
    
    if((x-0.5)*(x-0.5) + (y-0.5)*(y-0.5) < 0.5*0.5)
    {
      ++m;
    }
  }
  printf("%d out of %d points is inside\n", m, n);
  printf("%lf\n", (double)n / m);
  
  fclose(f);
}


