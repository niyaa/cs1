#include <stdio.h>

int main()
{
  printf("Storage size for char : %ld B \n", sizeof(char));
  char a = 'b';
  printf("a=%c \n", a);
  printf("a=%d \n", a);
  a = '\x15';
  printf("a=%c \n", a);
  printf("a=%d \n", a);
  /*a = "R";
  printf("a=%c \n", a);
  printf("a=%d \n", a);*/
  a = 'R';
  printf("a=%c \n", a);
  printf("a=%d \n", a);
  a = '\0';
  printf("a=%c \n", a);
  printf("11 %c 11 %c 11 %c 11 \n", '\0', '\x00', '\x31');
  printf("11 %d 11 %d 11 %d 11 \n", '\0', '\x00', '\x15');
}
