#include <stdio.h>

int main(){
  double i=0;
  for( ;i<10; )
  {
    for( int j=0; j<5; ++j)
      printf("(i,j)=(%lf,%d) ", i,j);
    printf("\n");
    i+=1.0;
  }
}
