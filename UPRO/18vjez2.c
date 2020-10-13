#include <stdio.h>
void izbacisamoglase(char *niz,char *niz2){
	while(*niz!='\0'){
		if(*niz != 'a' || *niz != 'A' ||*niz != 'e' 
		||*niz != 'E' ||*niz != 'i' || *niz != 'I' || *niz != 'O' 
		||*niz != 'o' ||*niz != 'u' ||*niz != 'U'){
			*niz2=*niz;
			
		}
		niz++;niz2++;
	}
	niz2='\0';
	return;
}
int main(void){
	char niz[50];
	char niz2[50];
	printf("upisi niz");
	fgets(niz,50,stdin);
	izbacisamoglase(niz,niz2);
	printf("%s", niz2);
	return 0;
}