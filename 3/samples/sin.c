#include <stdio.h>
#include <math.h>

int main(){
	double a = 0;	
	printf("The angle = ");
	scanf("%lf", &a);
	double result = sin(a);
	printf("The result of sin(%lf) is %lf\n", a, result);
	
	printf("%lf\n", cos(a));//call a function from a list of args
	printf("%lf\n", cos(pow(a,sin(a))));
}
