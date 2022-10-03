#include <stdio.h>

int main(){
  int i=0;
  for( ; i<10; ++i )
  {
    if(i==5) continue; //skipp the remainder and repeat
    printf("i=%d\n", i);
  }
  printf("Finally i=%d\n", i);
}
