#include <stdio.h>
void poredaj(double *x, double *y, double *z){
	double pom;
	if(*x >= *y){
		pom=*x;
		*x=*y;
		*y=pom;
	}
	if(*y >= *z){
		pom=*y;
		*y=*z;
		*z=pom;
	}
	return;
}
int main(void){
	double a, b, c;
	printf("Upisite tri realna broja > ");
	scanf("%lf %lf %lf", &a, &b, &c);
	poredaj(&a, &b, &c);
	printf("%6.6lf %6.6lf %6.6lf", a, b, c);
	return 0;
}