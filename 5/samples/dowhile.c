#include <stdio.h>

int main(){
  int i=100;
  do{
    printf("%d\n", i);
    ++i;
  }while(i<=10);
  printf("Finally i=%d\n", i);
}
