#include <stdio.h>
void izbacinr(char *niz){
	while(*niz!='\n' && *(niz+1)!='\0'){
		niz++;
	}
	*niz='\0';
	return;
}
char *traziprvisamoglas(char *niz){
	int duljina=0;
	while(*(niz+duljina)!='\0'){
		duljina++;
	}
	while(*niz!='a' && *niz!='A'&&
		*niz!='e' && *niz!='E' &&
		*niz!='O' && *niz!='o' &&
		*niz!='i' && *niz!='I' &&
		*niz!='u' && *niz!='U'&& *niz!='\0'){
		niz++;				
	}
	return niz;
}
int main(void){
	char niz[21];
	printf("upisite niz>");
	fgets(niz,21,stdin);
	izbacinr(niz);int i=0;
	char *p=traziprvisamoglas(niz);
	while(*p!='\0'){
		printf("%c", *p);
		p=traziprvisamoglas(p+1);
		
		
	}
	return 0;
}