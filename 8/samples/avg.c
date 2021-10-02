//Write a program that reads a data file,
//calculates an average value
//and finds the number of elements above,
//and below that average.
#include <stdio.h>

#define N 200

int main()
{
  FILE *fp = fopen("rand.dat", "r");
  
  int n;
  fscanf(fp, "%d", &n);
  if(n>N)
  {
    printf("ERROR, to much data\n");
    return -1;
  }
  int tab[N];
  for(int i=0; i<n; ++i)
  {
    fscanf(fp, "%d", &tab[i]);
  }
  
  double avg=0;
  for(int i=0; i<n; ++i)
  {
    avg+=tab[i];
  }
  avg /= (double)n;
  printf("Avg value = %lf\n", avg);
  int abv=0, blv=0;
  for(int i=0; i<n; ++i)
  {
    if(tab[i] > avg) ++abv;
    if(tab[i] < avg) ++blv;
  }
  printf("Number of elements %d\n", n);
  printf("Above avg %d\n", abv);
  printf("Below avg %d\n", blv);
  
  fclose(fp);
}
