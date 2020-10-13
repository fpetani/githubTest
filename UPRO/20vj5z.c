#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genText(char *niz,int duljina,char max, char min){
	int i=0;
	while(i<=duljina){
		*(niz+i)=rand() % (max - min + 1) + min;
		i++;
	}
	*(niz+i)='\0';
}
	

int main(void){
	srand((unsigned)time(NULL));
	int duljina;
	char niz[61];
	printf("upisite niz>");
	fgets(niz,61,stdin);
	printf("upisite duljinu gen niza>");
	scanf("%d", &duljina);
	char niz2[duljina+1];
	int j=0;int i; 
	char max=niz[0], min=niz[0];
	while(niz[j] != '\0' &&	niz[j] != '\n' ){
		if(niz[j+1]>max){
			max=niz[j+1];
		}
		if(niz[j+1]<min){
			min=niz[j+1];
		}
		j++;
	}
	for(i=0;i<3;i++){
		genText(niz2,duljina,max,min);
		printf("%s", niz2);
	}
}
