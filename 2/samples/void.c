#include <stdio.h>

int main()
{
  printf("Storage size for void : %ld B \n", sizeof(void)); //should not work, works in gcc
  //void a; //Not possible
  //printf(" %d \n", a);
}
