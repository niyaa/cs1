#include <stdio.h>
#include <stdbool.h>

int main()
{
  printf("Storage size for char : %ld B \n", sizeof(bool));
  bool a = true;
  printf("a=%d\n", a);
  a = false;
  printf("a=%d\n", a);
  
  //For curious students:
  a = true;
  printf("a=%s \n", a ? "true" : "false");
  a = false;
  printf("a=%s \n", a ? "true" : "false");
}
