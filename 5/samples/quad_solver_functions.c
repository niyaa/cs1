#include <stdio.h>
#include <math.h>

double coef1=10, coef2=11, coef3=12;
void hello();
void input();
double delta();
int how_many_roots(double delta);
double calculaeroots(double delta, int a);

int main(){
	hello();
	input();
	double d = delta();
	int noroots = how_many_roots(d);
	double x1, x2;
	switch(noroots)
	{
		case 2:
			x1 = calculaeroots(d, 1);
			x2 = calculaeroots(d, -1);
			printf("Two root x1=%lf, x2=%lf\n", x1, x2);
		break;
		case 1:
			x1 = calculaeroots(d, 1);
			printf("Single root x=%lf\n", x1);
		break;
		case 0:
			printf("No Roots!!\n");
		break;
		
		default:
			printf("Wrong choice!!\n");
	}
}

void hello(){
	printf("Hello!!\n");
}

void input(){ 
	//printf("%lf %lf %lf\n", a, b, c);
	scanf("%lf", &coef1);
	scanf("%lf", &coef2);
	scanf("%lf", &coef3);
}

double delta(){
	return coef2*coef2-4*coef1*coef3;
}

int how_many_roots(double delta){
	if(delta>0) return 2;
	else if(delta <0) return 0;
	else return 1;
}
double calculaeroots(double delta, int a)
{
	return (-coef2 + a* sqrt(delta)) / (2.0*coef1);
}

