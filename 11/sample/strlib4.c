#include <stdio.h>
#include <string.h>

int main(){
  char a[] = "abcde";//65 66 67
  
  char *p = strchr(a, 'z');
  
  printf("%c %p %d\n", *p, p, p-a);
  
  printf("%s\n", p);//!!
}
