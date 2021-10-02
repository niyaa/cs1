#include <stdio.h>
#include <string.h>

int main()
{
  int **A = (int **)malloc(number_of_rows * sizeof(int*));
  
  int *p = (int *)malloc(number_of_rows * number_of_collumns * sizeof(int));
  
  for(int i=0; i<number_of_rows; ++i)
    A[i] = p + number_of_columns * i;
  
  free(p);
  free(A);
}