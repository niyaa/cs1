#include <stdio.h>
#include <math.h>

int global_int = 0;

void fun1();
void fun2(int a);

int main(){
  global_int = 9;
  printf("%d\n", global_int);
  
  fun1();
  printf("%d\n", global_int);
  
  int a = 19;
  printf("%d\n", global_int);
  fun2(global_int);
  printf("%d\n", global_int);
}

void fun1()
{
  global_int++;
}

void fun2(int a)
{
  a=a+5;
}

