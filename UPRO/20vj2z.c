#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int brojac[10]={0};
	int i;
	srand((int)time(NULL));
	for(i=0;i<1000000;i++){
		++brojac[(rand()%(60-50+1)+50)-50];
	}
	for(i=0;i<11;i++){
		printf("%d %d\n", 50+i,brojac[i]);
	}
	return 0;
	
}