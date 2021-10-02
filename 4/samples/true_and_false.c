#include <stdio.h>
#include <math.h>

int main(){
  
  printf(" %d\n", 5>4);
  printf(" %d\n", 5<4);
  
  printf(" %d %d\n", 5>=5, 5>5);
  printf(" %d %d\n", 5<=5, 5<5);
  
//  printf(" %d\n", 5=4);//this is wrong!!!
  printf(" %d %d\n", 5==4, 5==5);
  printf(" %d %d\n", 5!=4, 5!=5);
  
  //complex logic operations! AND and OR
  printf(" %d\n", 5==4 && 5==5); //&& is an AND
  printf(" %d\n", 5!=4 || 5!=5); // || is an OR

}
