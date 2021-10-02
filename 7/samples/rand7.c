#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100000

void bubble_sort ( double list [], int n)
{
  int c, d;
  double t;
  for (c = 0 ; c < ( n - 1 ); c ++)
  {
    for (d = 0 ; d < n - c - 1; d ++)
    {
      if ( list [d] > list [d +1])
      {
        t = list [d];
        list [d] = list [d +1];
        list [d +1] = t;
      }
    }
  }
}

double avg(double A[], int n)
{
  double res = 0;
  for(int i=0; i<n; ++i)
  {
    res += A[i];
  }
  return res / n;
}

int main()
{ 
  double x, y;
  int n, m=0;
  double X[MAX_SIZE];
  double Y[MAX_SIZE];
  
  FILE *f = fopen("points.dat", "r");
  fscanf(f, "%d", &n);
  printf("%d\n", n);
  if(n > MAX_SIZE) return -1;
  
  for(int i=0; i<n; ++i)
  {
    fscanf(f, "%lf %lf", &x, &y);
    
    X[i] = x;
    Y[i] = y;
  }
  
  double avg_x = avg(X, n);
  double avg_y = avg(Y, n);
  
  printf("Avg(X) = %lf, Avg(Y)=%lf\n", avg_x, avg_y);
  bubble_sort(X, n);
  bubble_sort(Y, n);
   
  fclose(f);
  
  f = fopen("points_sorted.dat", "w");
  
  fprintf(f, "%d\n", n);
  for(int i=0; i<n; ++i)
  {
     fprintf(f, "%lf %lf\n", X[i], Y[i]);
  }
  
  fclose(f);
}


