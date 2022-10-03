#include <stdio.h>

int main(){
  int test =0;
  int i=0;
  while( test == 0)
  {
    for( int j=0; j<5; ++j)
      printf("(i,j)=(%d,%d) ", i,j);
    printf("\n");
    ++i;
    if(i==5) test = -1;
  }
}
