#include <stdio.h>
int main(void){
	FILE *ulaz=fopen("ulaz1.txt","r");
	float bodovi,bodovis=0.f;
	char jmbag[15];
	char ime[20];
	char prezime[20];
	int brojac=0;
	while(fscanf(ulaz,"%s %s %s %f"
	,jmbag,ime,prezime,&bodovi)==4){
		brojac++;
		bodovis+=bodovi;
	}
	bodovis=bodovis/(1.f*brojac);
	fseek(ulaz,0L,SEEK_SET);
	while(fscanf(ulaz,"%s %s %s %f%"
	,jmbag,ime,prezime,&bodovi)==4){
		if(bodovi>bodovis){
			 printf("%s %s %s %f\n",jmbag,ime,prezime,bodovi);
		}
	}
	fclose(ulaz);
	return 0;
}