#include <stdio.h>

int main()
{
  char c;
  printf("The size of char is %d\n", sizeof(char));
  
  //1 byte stores ints from 0 to 255 (256 characters)
  for(int i=0; i<300; ++i)
  {
    printf("%d %c\n", i, i);
  }
  
  //there is a special character! '\0'
  for(int i=0; i<256; ++i)
  {
    if(i=='\0')
      printf("%d %c\n", i, i); // the zero char
  }
}
