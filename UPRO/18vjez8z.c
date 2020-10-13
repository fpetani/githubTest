#include <stdio.h>
void izbacinr(char *niz){
	while(*niz!='\n' && *(niz+1)!='\0'){
		niz++;
	}
	*niz='\0';
	return;
}
void ispisatiobrnuto(char *niz1, char *niz2, int duljina){
	int i=0;int j;
	
	for(j=duljina-1;j>=0;j--){
		*(niz2+i)=*(niz1+j);
		i++;
	}
	*(niz2+i)='\0';
	
	return;
	
}
int main(void){
	char niz1[21];
	char niz2[21];
	printf("upisite niz>");
	fgets(niz1,21,stdin);
	izbacinr(niz1);
	int duljina=0;
	while(niz1[duljina]!='\0'){
		duljina++;
	}
	ispisatiobrnuto(niz1,niz2,duljina);
	printf("%s", niz2);
	return 0;
}
