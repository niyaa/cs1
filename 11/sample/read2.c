#include <stdio.h>

int main(){
  char a[256];
  
  //char *p = fgets( a, 256, stdin );
  fgets( a, 256, stdin );
  
  printf("%s\n", a);
  printf("%c %p\n", a[0], a);
}
