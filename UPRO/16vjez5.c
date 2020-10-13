#include <stdio.h>
#include <math.h>
void vraca(int n, double *p, double *p1, double *p2){
	*p=pow(n,1./2.);
	*p1=pow(n,1./3.);
	*p2=pow(n,1./5.);
	return;
}
int main(void){
	int n;
	double a, b, c;
	printf("Upisite nenegativni cijeli broj > ");
	scanf("%d", &n);
	
	vraca(n,&a,&b,&c);
	printf("Rezultati su:\n %lf \n %lf \n %lf", a, b, c);
	return 0;
}
	
	
	