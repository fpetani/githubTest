#include <stdio.h>
int main(void) {
	unsigned int broj=10u;
	int bit, i;
	do {
		bit=0;
		for(i=broj; i>0;i/2) {
			if(!(i % 2 == 0)) {
				bit++;
			}
		}
		if(bit==4) {
			printf("%u \n", broj);
		}
		broj++;
	}while(broj<10000);
	return 0;
}