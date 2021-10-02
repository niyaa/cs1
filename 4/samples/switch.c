#include <stdio.h>
#include <math.h>

int main(){
  int a;
  scanf("%d", &a);
  

  switch(a)
  {
    case 1:
      printf("This is the first case\n");
      break;
    case 2:
      printf("This is the second case\n");
      break;
    default :
      printf("Your choiche is unrecognized!!\n");
  }
}
