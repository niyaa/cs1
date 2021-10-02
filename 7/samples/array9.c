#include <stdio.h>
#define N 100
//this define sets the maximum size of my array

void Fill(int *A, int n) // the array and its size
{
  for(int i=0; i<n; ++i)
    A[i] = 2*i;
}

void PrintArray(int* A, int n)
{
  for(int i=0; i<n; ++i)
    printf(" %d ", A[i]);
  printf(" \n ");
}

int main(){
  int tabA[N]; // an array of 3 int
  
  int n;
  scanf("%d", &n);
  
  Fill(tabA, n);
  PrintArray(tabA, n);
  
}
