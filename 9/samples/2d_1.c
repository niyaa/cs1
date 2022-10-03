#include <stdio.h>

int main(){
  int tab[2][3]; // this is an 2D array
  
  tab[0][0] = 0;
  tab[0][1] = 2;
  tab[0][2] = 3;
  
  tab[1][0] = 10;
  tab[1][1] = 12;
  tab[1][2] = 13;
  
  printf("%d %d %d \n", tab[0][0], tab[0][1], tab[0][2]);
  printf("%d %d %d \n", tab[1][0], tab[1][1], tab[1][2]);
}
