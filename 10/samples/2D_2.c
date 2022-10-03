#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 5;
  int * p =& a ;
  int ** pp =& p ; // !!!
  
  printf ( " %d \n" , a ) ; // 5
  printf ( " %d %p\n" , *p, p) ; // 5
  printf ( " %d %p %p\n", *(* pp ), p, pp ) ; // 5
  
  printf ( " %d \n" , a ) ; // 5
  printf ( " %d \n" , p[0]) ; // 5
  printf ( " %d \n" , pp[0][0] ) ; // 5
}
