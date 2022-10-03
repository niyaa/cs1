#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  
  double x, y;
  int n;
  scanf("%d", &n);
  
  FILE *f = fopen("points.dat", "w");
  
  fprintf(f, "%d\n", n);
  
  for(int i=0; i<n; ++i)
  {
    x = rand() / (double)RAND_MAX;
    y = rand() / (double)RAND_MAX;
    fprintf(f, "%lf %lf\n", x, y);
  }
  
  
  fclose(f);
}


