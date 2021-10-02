#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *f=fopen("read4.c", "r");
  
  char line[1000];
  //char *p = fgets( a, 256, stdin );
  for(int i=0; i<15; ++i) //How to see if file has ended?
  {
    fgets( line, 1000, f );
    printf("%s", line);
  }
  fclose(f);
}
