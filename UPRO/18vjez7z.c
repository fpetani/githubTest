#include <stdio.h>
void izbacinr(char *niz){
	while(*niz!='\n' && *(niz+1)!='\0'){
		niz++;
	}
	*niz='\0';
	return;
}
void izracunajvm(char *niz, int *velika, int *mala){
	while(*niz!='\0'){
		if(*niz>='a' && *niz<='z'){
			*mala=*mala + 1;
		}else if(*niz>='A' && *niz<='Z'){
			*velika=*velika+1;
		}
		niz++;
	}
	return;
	
}
int main(void){
	char niz[20];
	int velika=0, mala=0;int *p1=&velika; int *p2=&mala;
	printf("upisite niz>");
	fgets(niz,21,stdin);
	izbacinr(niz);
	izracunajvm(niz, p1, p2);
	printf("velikih:%d\n", velika);
	printf("maih:%d\n", mala);
	return 0;
	
}