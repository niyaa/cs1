#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *f=fopen("read4.c", "r");
  
  char line[1000];
  for(int i=0; i<10; ++i) //How to see if file has ended?
  {
    fgets( line, 1000, f );
    printf("%s", line);
  }
  fclose(f);
}