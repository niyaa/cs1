#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 500

void fillArray(double A[], int n, double x_max, double x_min);
void printArray(double B[], int n);
void sort(double A[], int n);

int main()
{
  srand(time(NULL)); // called only once at the start
  
  double x[MAX_SIZE];
  printf("Set the size\n");
  int n;
  scanf("%d", &n);
  if(n > MAX_SIZE)
  {
    printf("Array to large\n");
    return -1;
  }
  fillArray(x, n, 0.0, 1.0);
  printArray(x, n);
  sort(x, n);
  printArray(x, n);
  
}

void fillArray(double A[], int n, double x_max, double x_min)
{
  for(int i=0; i<n; i++)
  {
    A[i] = (x_max - x_min) * rand() / (double)RAND_MAX + x_min;
  }
}

void printArray(double B[], int n)
{
  for(int i=0; i<n; i++)
  {
    printf("%d %lf\n", i, B[i]);
  }
}

void sort(double A[], int n)
{
  double tmp;
  
  for(int j=0; j<n; ++j)
  {
    for(int i=0; i<n-1-j; i++)
    {
      if(A[i] > A[i+1])
      {
        tmp = A[i+1];
        A[i+1] = A[i];
        A[i] = tmp;
      }
    }
  }
}






