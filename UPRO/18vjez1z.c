#include <stdio.h>
void izbacinr(char *niz){
	while(*niz != '\n' && *niz+1!='\0'){
		++niz;		
	}
	*niz='!';
}
int main(void){
	char niz[51];
	printf("upisite niz>");
	fgets(niz, 51, stdin);
	izbacinr(&niz[0]);
	printf("%s", niz);
	return 0;
}