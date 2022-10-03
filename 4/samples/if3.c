#include <stdio.h>
#include <math.h>

int main(){
  int a=0;
  printf("Give a number from 0 to 10\n");
  scanf("%d", &a);
  int b;
  if(a>0 && a<10)
  {
    b=a+1;
    printf("I choose %d, this is greater than your number. I win!!\n", b);
  }
  else if(a>=10)
  {
    printf("Your numer is to large. I win!!\n");
  }
  else
  {
    printf("I win anyway!!\n");
  }
}
