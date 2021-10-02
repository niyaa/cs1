#include <stdio.h>

int main(){
  int i=0;
  start: //label to be used with a goto
  printf("%d\n",i);
  ++i;
  if(i<=100) goto start;
}
