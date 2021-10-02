#include <stdio.h>

int main()
{
  int a=5, b=4;
  int c;
  printf("%d+%d=%d\n", a, b, a+b);
	printf("%d-%d=%d\n", a, b, a-b);
	c=a*b;
	printf("%d*%d=%d\n", a, b, c);
	
	printf("%d/%d=%d\n", a, b, a/b);
	printf("%d+%d=%d\n", a, b, 1/2);
	
	printf("%d %% %d=%d\n", a, b, a%b);
	printf("%d %% %d=%d\n", b, a, b%a);
}
