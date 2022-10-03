#include <stdio.h>

void PrintArray(int* A, int n);

void bubble_sort ( int list [], int n)
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
  int tab[] = {9,6,4,2,6,8,1,5,8,2,5,8}; //12
  PrintArray(tab, 12);
  bubble_sort(tab, 12);
  PrintArray(tab, 12);
}


void PrintArray(int* A, int n)
{
  for(int i=0; i<n; ++i)
    printf(" %d\n ", A[i]);
  printf("-----\n");
}
