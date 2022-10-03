#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void PrintArray(int* A, int n);
void FPrintArray(int* A, int n);
void bubble_sort ( int list [], int n);
void GenerateRandomArray(int A[], int n);

FILE * F; //this is a global file pointer

int main()
{
  F = fopen("bubble.dat", "w");
  srand(time(NULL));
  int n;
  int tab[N];
  scanf("%d", &n); //this is where size is read
  
  GenerateRandomArray(tab, n);
  PrintArray(tab, n);
  bubble_sort(tab, n);
  PrintArray(tab, n);
  fclose(F);
}

void GenerateRandomArray(int A[], int n)
{
  for(int i=0; i<n; ++i)
    A[i] = rand() % 10; //this will give int only from 0 to 9
}

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
    FPrintArray(list, n);
  }
}

void PrintArray(int* A, int n)
{
  for(int i=0; i<n; ++i)
    printf(" %d\n", A[i]);
  printf("-----\n");
}
void FPrintArray(int* A, int n)
{
  for(int i=0; i<n; ++i)
    fprintf(F," %d\n", A[i]);
  fprintf(F,"-----\n");
}

