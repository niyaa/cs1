#include <stdio.h>
#include <stdlib.h>

void print(int **A, int n, int m)//??
{
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  
  int **tab = (int**)malloc(n*sizeof(int*));
  int *p = (int*)malloc(n*m*sizeof(int));
  
  for(int i=0; i<n; ++i)
    tab[i] = p+i*m;
  
  for(int i=0; i<n; ++i)
    for(int j=0; j<m; ++j)
      tab[i][j] = rand()%10;
  
  print(tab, n, m);
  
  free(p);
  free(tab);
}
