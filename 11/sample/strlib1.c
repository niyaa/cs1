#include <stdio.h>
#include <string.h>

int main(){
  char a[] = "ABC";//65 66 67
  char b[] = "ABC";//97 98 99

  int res = strcmp(b, a);
  printf("res is: %d\n", res);
}
