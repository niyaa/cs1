#include <stdio.h>

int main()
{
  printf("Storage size for int : %ld B \n", sizeof(int));
  
  int a = 9;
  printf("a=9\n"); // not a grat idea!
  
  printf("a=%d\n", a);
	
	int b=8;
	int c = a+b;
	printf("a=%d, b=%d, c=a+b=%d\n", a, b, c);
	printf("a=%d, b=%d, c=%d+%d=%d\n", a, b, a, b, c);
	printf("a=%d, %d %d \n", a, a, a);
	
	int d=15, e=16;
	printf("d=%d, e=%d \n", d,e);
	printf("d=%o, e=%o \n", d,e);
	printf("d=%x, e=%x \n", d,e);
	
	c=0xF;
	b=012;
	printf("d=%d, e=%d \n", c,b);
	printf("d=%o, e=%o \n", c,b);
	printf("d=%x, e=%x \n", c,b);
}
