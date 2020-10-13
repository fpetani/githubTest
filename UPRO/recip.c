#include <stdio.h>
int main(void) {
	float x, recip;

	scanf("%f", &x);
	if(x != 0);{
	  printf("%f", x);
	  recip = 1 / x;
	  printf(" reciprocna vrijednost je:  %f", recip);
	}
	return 0;
}		