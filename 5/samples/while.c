#include <stdio.h>

int main(){
  int i=0;
  while(i<=10){
    ++i;
    i=0;// let not do this!
    printf("%d\n", i);
    ++i;
  }
  printf("Finally i=%d\n", i);
}
