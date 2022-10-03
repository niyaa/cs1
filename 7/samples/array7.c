#include <stdio.h>

void Fill(int A[], int n) // the array and its size
{
  for(int i=0; i<n; ++i)
    A[i] = 2*i;
}

void PrintArray(int A[], int n)
{
  for(int i=0; i<n; ++i)
    printf(" %d ", A[i]);
  printf(" \n ");
}

int main(){
  int tabA[10]; // an array of 3 int
  
  Fill(tabA, 10);
  PrintArray(tabA, 10);
  
}
