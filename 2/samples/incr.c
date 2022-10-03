#include <stdio.h>

int main()
{
  int a,b; //declare two variables of type int
  
  a = 3;
  b = 2;
  
  /*printf("%d\n",a); //3
  printf("%d\n",b); //2
  
  printf("%d\n",a++);//4
  printf("%d\n",b--);//2
  
  printf("%d\n",a);
  printf("%d\n",b);
  
  printf("%d\n",--a);
  printf("%d\n",++b);
  
  printf("%d\n",a);
  printf("%d\n",b);*/
  
  //b = ++a++;
  a = 1;
  b = 5;
  printf("%d\n",a);
  a += b;
  printf("%d\n",a);
  a -=1;
  printf("%d\n",a);
  a *=9;
  printf("%d\n",a);
  a /= b;
  printf("%d\n",a);
  
}
