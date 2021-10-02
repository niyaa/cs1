#include <stdio.h>

int main(){

  char a='d';
  char b='e';
  
  char* p = &a;// p stores address of a
  printf("%c %p\n", a, &a);
  printf("%c %p\n", b, &b);
  
  *p = 'q';
  printf("%c %p\n", a, &a);
  printf("%c %p\n", b, &b);
  
  p=&b;
  *p = 'w';
  printf("%c %p\n", a, &a);
  printf("%c %p\n", b, &b);
  
}
