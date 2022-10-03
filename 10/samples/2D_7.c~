#include <stdio.h>
#include <stdlib.h>

void print(int **A, int n, int m)
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
  
  //Allocate memmory to store the array entries and the
  //pointers to row beginnings
  void *p = malloc(n*sizeof(int*) + n*m*sizeof(int));
  int **tab = p;//We use this to store row pointers, this will work with [][]
  //Initialize tab with the value of p. This way tab points at the begining
  
  //Iterate, assigning adresses of the row first elements
  //be maidfull of the pointer arithmetics!
  for(int i=0; i<n; ++i)
    tab[i] = p+n*sizeof(int*)+i*m*sizeof(int);
  //need to cast tab to int* since tab[] is equivalent to *(tab+i) -> int*
  //skip the n*sizeof(int*) bytes used for row adresses
  //move by the size of row
    
  //p, tab store the same adress, tab[0] stores adress of the first row
  printf("%llu %llu %llu\n", p, tab, tab[0]);
  printf("Distance from p to tab[0] is %llu\n", (void*)tab[0] - p);
  
  for(int i=0; i<n; ++i)
  {
    printf("%d %llu\n", i, tab[i]);
    for(int j=0; j<m; ++j)
    {
      printf("%d %d %llu\n", i, j, &tab[i][j]);
      tab[i][j] = rand()%10;
    }
  }
  
  printf("aaa\n");
  
  print(tab, n, m);
  
  free(p);
}





