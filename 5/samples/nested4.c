#include <stdio.h>

int read(){
  int n;
  scanf("%d",&n);
  return n;
}

int main(){
  int i=0;
  for( ;4!=read(); )
  {
    for( int j=0; j<5; ++j)
      printf("(i,j)=(%d,%d) ", i,j);
    printf("\n");
    ++i;
  }
}
