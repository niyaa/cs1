#include <stdio.h>

int main(){
  int i=0;
  for( ; i<10; ++i )
  {
    //if(i==5) break;
    printf("i=%d\n", i);
    if(i==5)
    {
      printf("Breaking the loop!!\n");
      break;
    }
  }
  printf("Finally i=%d\n", i);
}
