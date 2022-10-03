#include <stdio.h>
#include <stdlib.h>

int main()
{
  int **tab = (int**)malloc(2*sizeof(int*)); //int *tab[2]
  int *p = (int*)malloc(2*3*sizeof(int));
  
  tab[0] = p;
  tab[1] = p+3;//+ the size of a row, the number of collumns
  
  /*p[0] = 11;
  p[1] = 12;
  p[2] = 13;
  p[3] = 21;
  p[4] = 22;
  p[5] = 23;*/
  tab[0][0] = 11;
  tab[0][1] = 12;
  tab[0][2] = 13;
  
  tab[1][0] = 21;
  tab[1][1] = 22;
  tab[1][2] = 23;
  
  printf("%d %d %d\n", tab[0][0], tab[0][1], tab[0][2]); //11 12 13
  printf("%d %d %d\n", tab[1][0], tab[1][1], tab[1][2]); //21 22 23
   
  free(p);
  free(tab);
}
