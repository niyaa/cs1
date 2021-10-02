#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *f = fopen("sin.dat", "r");
  int n;
  fscanf(f, "%d", &n); //read the size from a file
  printf("Size is %d\n", n);
  
  double *x = (double*)malloc(n*sizeof(double)); // not int[n]
  double *y = (double*)malloc(n*sizeof(double));
  
  for(int i=0; i<n; ++i)
    fscanf(f, "%lf, %lf", &x[i], &y[i]);
    
  for(int i=0; i<n; ++i)
    printf("%lf, %lf\n", x[i], y[i]);
  
  fclose(f);
  free(x); // this has to be here
  free(y);
}






