#include <stdio.h>
_Bool umetniznak(char *niz, int poz, char znak, int brojac){
	char pomocna;
	int i;
	if(poz <= brojac){
		for(i=brojac;i>=poz;--i){
			*(niz+i+1)=*(niz+i);
		}
		*(niz+poz)=znak;
	return 1;
	}else{
		return 0;
	}
	*(niz+brojac+2)='\0';
	
	
}
int main(void){
	char polje[22];
	char znak;
	printf("upisi niz >");
	fgets(polje,22,stdin);
	printf("upisi znak i poziciju>");
	int poz;
	scanf("%c %d", &znak, &poz);
	int brojac=0;
	while(polje[brojac]!='\0' && polje[brojac]!='\n'){
		brojac++;
		
	}
	if(umetniznak(polje, poz, znak, brojac)){
			printf("%s", polje);
	}else{
		printf("neispravna pozicija ");
	}
	return 0;
	
	
}