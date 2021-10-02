#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d\n", &n);
  char *p=(char*)malloc(n*sizeof(char));
  
  //char *p = fgets( a, 256, stdin );
  fgets( p, n, stdin );
  
  printf("%s\n", p);
  //printf("%c %p\n", *p, p);
  printf("%c %p\n", p[0], p);
  
  free(p);
}
