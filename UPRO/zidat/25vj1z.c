#include <stdio.h>
#include <ctype.h>
int main(void){
	FILE *ulaz=fopen("podaci.txt","r");
	char niz[40];
	int i;
	while(fscanf(ulaz,"%s",niz)==1){
		char *p=niz;
		while(*p != '\0'){
			if(islower(*p)){
				*p=toupper(*p);
				
			}
			p++;
		}
	}
	
	fclose(ulaz);
	return 0;
}