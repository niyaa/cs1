#include <stdio.h>

int main(){
  int tabA[3]; // an array of 3 int
  
  tabA[0] = 3;
  *(tabA+1) = 9;
  2[tabA] = 5;
  
  //if tab[2] is eq. *(tab+2)
  //than it is also eq. *(2+tab) -->> 2[tab]
  
  printf("the 0 %d\n", tabA[0]); //3
  printf("the 1 %d\n", tabA[1]);//9
  printf("the 2 %d\n", tabA[2]);//5
  printf("----\n");
  
  int *p=tabA; // could be p=tabA
  printf("the 0 %d\n", *p);
  printf("the 1 %d\n", *(1+p));
  printf("the 2 %d\n", *(2+p));
  printf("----\n");  
  
  printf("the 0 %d\n", 0[tabA]);
  printf("the 1 %d\n", 1[tabA]);
  printf("the 2 %d\n", 2[tabA]);
  printf("----\n");
  
  printf("the 0 %d\n", 0[p]);
  printf("the 1 %d\n", 1[p]);
  printf("the 2 %d\n", 2[p]);
  printf("----\n");
}
