#include <stdio.h>

int main(){

  char a='d';
  char b='e';
  
  char* p = &a;// p stores address of a
  printf("%c %llu\n", a, &a);
  printf("%c %llu\n", b, &b);
  
  *p = 'q';
  printf("%c %llu\n", a, &a);
  printf("%c %llu\n", b, &b);
  
  p=&b;
  *p = 'w';
  printf("%c %llu\n", a, &a);
  printf("%c %llu\n", b, &b);
  
}
