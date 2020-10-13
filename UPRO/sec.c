#include <stdio.h>
#include <math.h>

unsigned long long factorial(unsigned n) {
	unsigned long long fac = 1;
	for(int i = 1; i <= n; i++) {
		fac *= i;
	}
	return fac;
}

_Bool maclaurin_sin(double x, unsigned n, double *s) {
	double sum = 0;
	for(int i = 0; i < n; i++) {
		sum += pow(-1.0, i) * pow(x, 2.0*i + 1) / (factorial(2*i + 1));
	}
	*s = sum;
	
	
	double diff = sum - sin(x);
	double abs = (diff >= 0.0) ? diff : -diff;
	
	return abs > pow(10.0, -5.0) ? 0 : 1;
}

int main(void) {
	int n; double x;
	scanf("%d %lf", &n, &x);
	printf("%u", factorial(n));
	double mc;
	_Bool t;
	t = maclaurin_sin(x, n, &mc);
	printf("\n%d %lf", t, mc);
	
	
	return 0;
}
