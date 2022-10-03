//Write a program that reads a data file,
//calculates an average value
//and finds the number of elements above,
//and below that average.
#include <stdio.h>

#define N 200

void bubble_sort ( int list[], int n)
{
  int c, d, t;
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

int main()
{
  FILE *fp = fopen("rand.dat", "r+");
  
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
  
  bubble_sort(tab, n);
  fprintf(fp, "\n--------\n");
  for(int i=0; i<n; ++i)
  {
    fprintf(fp, "%d\n", tab[i]);
  }
  
  fclose(fp);
}
