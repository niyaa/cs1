#include <stdio.h>

void Init(int A[][3]){
  A[0][0] = 0;
  A[0][1] = 2;
  A[0][2] = 3;
  
  A[1][0] = 10;
  A[1][1] = 12;
  A[1][2] = 13;
}

void Print(int A[][3]){
  printf("%d %d %d\n", A[0][0], A[0][1], A[0][2]);
  printf("%d %d %d\n", A[1][0], A[1][1], A[1][2]);
}

int main(){
  int tab[2][3]; // this is an 2D array
  
  Init(tab);
  Print(tab);
}
