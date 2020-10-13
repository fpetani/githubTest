#include <stdio.h>
#include <math.h>
int main(void) {
	char niz[10];
	fgets(niz,10,stdin);
	int i;
	for(i=0;i<10;i++) {
		if(niz[i]  '0' && niz[i]> '9'){
			printf("nije unesen dekadski broj");
			break;
		}
	}
	int broj=0, potencija=1;
	
	for(i=10;i>-1;i--) {
		if(niz[i] > '0' && niz[i] <'9'){
			broj+=(niz[i]-'0')*potencija;
			potencija=potencija*10;
		}
	}
	printf("%.2f", sqrt(broj));
	return 0;
}

			
			
	
	