#include <stdio.h>
#include <math.h>
int main(void) {
	float a, b;
	int c;
	printf("upisite a, b i n: ");
	scanf("%f %f %d", &a, &b, &c);
	float bort[c+1];
	float aort[c+1];
	bort[0]=b;
	aort[0]=a;
	int i;
	for(i=1; i<c; i++) {
		aort[i]= (aort[i-1] + bort[i-1])/2;
		bort[i]= sqrt(aort[i-1]*bort[i-1]);
	}
	for(i=1; i<c; i++) {
		printf("A(%d) = %.4f  B(%d) =%.4f\n", i+1 , aort[i], i+1, bort[i]);
	}
	return 0;
}

		
	
	
	