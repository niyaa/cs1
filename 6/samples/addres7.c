#include <stdio.h>

//Have a function that calculates and returns more than one value

//values of 5 and 10
void fun(int *a, int *b)
{
  *a = 5;
  *b = 10;
}

int main(){
  
  int a, b;
  fun(&a, &b);
  
  printf("%d %d\n", a, b);
  
}
