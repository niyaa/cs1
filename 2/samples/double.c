#include <stdio.h>

int main()
{
  printf( " Storage size for float : %ld B\n " , sizeof( float ) ) ;
	printf( " Storage size for double : %ld B\n " , sizeof( double ) ) ;
  
	float myveryfirstfloatnumber=9.92345e-9;
	double b=3.4567899999e9;
	
	printf("myveryfirstfloatnumber=%lf, b=%lf\n", myveryfirstfloatnumber, b);
	printf("myveryfirstfloatnumber=%e, b=%e\n", myveryfirstfloatnumber, b);
}
