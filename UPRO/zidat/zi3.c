#include <stdio.h>
#include <ctype.h>
char *kazaljka(char *niz){
	int pronaden;
	while(*p!='\0'){
		if(isupper(*niz)){
			++pronaden;
			return *p;
			
		}else if(*(niz+1)=='\0' && pronaden==0){
			return NULL;
		}else{
			niz++;
		}		
	}
	
}
int main(void){
	char niz[50];
	printf("Upisite niz: ");
	fgets(niz,50,stdin);
	char *p=kazaljka(niz);
	printf("prvo veliko slovo je:%c\n", *p);
	printf("ostatak niza je: %s", p);
	return 0;
}