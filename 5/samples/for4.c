#include <stdio.h>

int main(){
  int i=10;
  for( ; ; )
  {
    printf("i=%d\n", i);
    --i;
  }
  printf("Finally i=%d\n", i);
}
