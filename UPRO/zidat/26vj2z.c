#include <stdio.h>
int main(void){
	FILE *ulaz=fopen("ulaz1.txt","r");
	FILE *izlaz=fopen("izlaz.txt","w");
	float suma,broj;
	int brojac=0;
	while(fscanf(ulaz,"%f",&broj)==1){
		suma+=broj;
		brojac++;
	}
	if(brojac>0){
	suma=suma/(brojac*1.f);
	fprintf(izlaz,"%f",suma);
	}else{
		printf("nije ispravan upis!");
	}
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}