#include <stdio.h>
#include <stdlib.h>
int main(void){
struct drz_s {
	int sifDrz;
	char krat[2 + 1];
	char naz[40 + 1];
} drzava;
	int sifra;
	printf("upisite sifru:");
	scanf("%d",&sifra);
	FILE *izlaz=fopen("podaci1.bin","rb");
	fseek(izlaz,(long)(sifra-1)*sizeof(drzava), SEEK_SET);
	fread(&drzava,sizeof(drzava),1,izlaz);
	if(sifra==drzava.sifDrz){
		printf("%s",drzava.naz);
		
	}else{
		printf("nema tog kljuca");
		
	}
	fclose(izlaz);
	return 0;
}                                              