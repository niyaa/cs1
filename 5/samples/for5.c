#include <stdio.h>

int i=10; //this is global
int test = 1;

int main(){
  
  for( ;test; )
  {
    printf("i=%d\n", i);
    --i;
    if(i<0) test = 0;
  }
  printf("Finally i=%d\n", i);
}
