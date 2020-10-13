#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inicijalizirajpolje(char *p, int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(p + n*i +j)='.';
		}
	}
	return;
}
void ispisipolje(char *p, int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4c", *(p+n*i+j));
		}
		printf("\n");
	}
}
void crtajputanju(char *p, int n,char x){
	int i=0, j=0;
	*p=x;
	while(i<n-1 && j<n-1){
		int dolje=rand()%2;
		if(dolje){
			++i;
			*(p+n*i+j)=x;
		}else{
			++j;
			*(p+n*i+j)=x;
		}	
	}
}
int main(void){
	srand((unsigned)time(NULL));
	char niz[10][10];
	char niz2[10][10];
	inicijalizirajpolje(&niz[0][0],10,10);
	crtajputanju(&niz[0][0],10,'o');
	ispisipolje(&niz[0][0],10,10);
	crtajputanju(&niz[0][0],10,'x');
	printf("\n");
	ispisipolje(&niz[0][0],10,10);
	return 0;
	
	
	
}