#include <stdio.h>
#include <string.h>

int main(){
  char a[] = "Passing data to and from functions with pointers";
  char key[]="data";
  int l=strlen(key);
  
  char *p = strstr(a, key);
  if(p!='\0')
    *(p+l) = '\0';
  
  printf("%c %p %d\n", *p, p, p-a);
  printf("%s\n", p);
}
