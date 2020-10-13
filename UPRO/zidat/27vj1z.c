#include <stdio.h>
#include <string.h>
int main(void){
	FILE *ulaz=fopen("ulaz1.txt","r");
	FILE *drama=fopen("drama.txt","w");
	FILE *sf=fopen("sf.txt","w");
	FILE *komedija=fopen("komedija.txt","w");
	char film[50];
	char zanr[15];
	int godina;
	while(fscanf(ulaz,"%[^|]|%[^|]|%d",
		film,zanr,&godina)==3){
			if(strcmp(zanr,"drama")==0){
				fprintf(drama,"%s, %d", film, godina);
			}else if(strcmp(zanr,"komedija")==0){
				fprintf(komedija,"%s, %d", film, godina);
			}else if(strcmp(zanr,"SF")==0){
				fprintf(sf,"%s, %d", film, godina);
			}
		}
	fclose(ulaz);
	fclose(drama);
	fclose(komedija);
	fclose(sf);
	return 0;	
}