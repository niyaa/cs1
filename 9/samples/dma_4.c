#include <stdio.h>
#include <stdlib.h>
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

void PrintArray(int* A, int n)
{
  for(int i=0; i<n; ++i)
    printf(" %d\n ", A[i]);
  printf("-----\n");
}

int main(){
  int n;
  printf("Size please!\n");
  scanf("%d", &n);
  int *p = (int*)malloc(n*sizeof(int)); // not int[n]
  
  for(int i=0; i<n; ++i)
    p[i] = rand()%100;
    
  PrintArray(p, n);
  bubble_sort(p, n);
  PrintArray(p, n);
   
  free(p); // this has to be here
}






