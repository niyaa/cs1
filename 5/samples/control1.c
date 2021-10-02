#include <stdio.h>

int main(){
  int a=5;
  for(int i=0; i<2; ++i)
  {
    a=i;
    for(int j=0; j<2; ++j)
    {
      if(i==j){ continue; break;}
      a +=j;
        //printf("(%d,%d) ",i,j);
    }
    //printf("\n");
  }
  //a?
}
