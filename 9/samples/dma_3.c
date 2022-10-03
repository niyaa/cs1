#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Size please!\n");
  scanf("%d", &n);
  int *p = (int*)malloc(n*sizeof(int)); // not int[n]
  
  for(int i=0; i<n; ++i)
    p[i] = i+1;
    
  for(int i=0; i<n; ++i)
    printf("%d\t", p[i]);
  printf("\n"); 
   
  free(p); // this has to be here
}






