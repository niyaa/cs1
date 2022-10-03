#include <stdio.h>
#include <string.h>

int main(){
  char a[10] = "ABC";//65 66 67
  char b[10] = "abc";//97 98 99

  printf("%s \n", a);
  printf("%s \n", b);
  strcat(b, a); //make sure the size of a is enough!
  printf("%s \n", a);
  printf("%s \n", b);
}
