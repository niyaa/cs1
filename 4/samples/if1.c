#include <stdio.h>
#include <math.h>

int main(){
  if(1)
    printf("This is the first if!\n");
  if(0){
    printf("This is the second if!\n");
    printf("---------------------!\n");
  }

  int a=9;
  if(a=7) //this is wrong!!!
  {
    printf("Is 9=7 ??\n");
    printf("a=%d\n", a);
  }
  
  if(a==9)
  {
    printf("a is equal to 9!!\n");
  }
  
  if(a==7)
  {
    printf("a is equal to 7!!\n");
  }
  
  int b = 5;
  
  if(a==9 || b==5)
  {
    printf("a is 9 or b is 5\n");
  }
  
  if(a==7 && b != 6)
  {
    printf("a is 7 and b is not 6\n");
  }
}
