#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, x1, x2;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	if(a==0.0){
		printf("Go and do it yourself!!\n");
		return -1;
	}
	d = b*b-4.0*a*c;
	if(d>=0)//2 roots
	{
		x1 = (-b-sqrt(d))/(2*a);
		x2 = (-b+sqrt(d))/(2*a);
		printf("x1=%lf\nx2=%lf\n",x1,x2);
		return 0;
	}
	else if(d<0)//no roots
	{
		printf("The problem has no solution in the Real doamin!!\n");
		return 0;
	}
	else //1 root
	{
		x1 = (-b-sqrt(d))/(2*a);
		printf("x1=%lf\n",x1);
		return 0;
	}
}
