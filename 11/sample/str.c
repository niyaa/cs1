#include <stdio.h>
#include <stdlib.h>

int main(){
  char a = 'a'; //this is a single char
  char b = '\0'; //so is this
  
  printf("%c %c\n", a, b);
  
  char tc[20];
  tc[0] = 'a';
  for(int i=0; i<20; ++i)
  {
    tc[i] = rand();
    printf("%c\n", tc[i]);
  }
  
  printf("%s\n", tc);
  
  tc[3] = b; // '\0' is the termination character
  printf("%s\n", tc);
}
