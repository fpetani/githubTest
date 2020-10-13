#include <stdio.h>
void mystrcmp(char *niz1, *char niz2){
	int duljina1=0;duljina2=0;
	while(niz1!='\0'){
		duljina1+=*niz1;
		niz1++;
			
	}
	while(niz2!='\0'){
		duljina2+=*niz2;
		niz2++;
	}
	if(duljina1=duljina2){
		printf("nizovi su jednaki");
	}
	if(duljijna1<duljina2){
		printf("2. niz je veci");
	}else if(duljijna2<duljina1){
		printf("1. niz je veci");
	}
	return;
	
}
int main(void){}