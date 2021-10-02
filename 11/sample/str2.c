#include <stdio.h>
#include <stdlib.h>

int main(){
  char a[] = "The cat is black!";
  printf("%s\n", a);

  char *p = "This cat is white!";
  printf("%s\n", p);
  
  p="aaaaa";
  printf("%s\n", p);
}
