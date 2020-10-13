#include <stdio.h>
#include <string.h>
#define MAXPREZ 20
int main(void){
	FILE *bin=fopen("osoba.bin","r+b");
	struct ucenik_s{
		int sifra;
		char prezime[MAXPREZ+1];
		float koef;
	}ucenik;
	char prez[MAXPREZ+1];
	float srvr=0.f;
	int brojac;
	while(fread(&ucenik,sizeof(ucenik),1,bin)==1){
		brojac++;
		srvr+=ucenik.koef;
	}
	srvr=srvr/(1.f*brojac);
	fseek(bin,(-brojac)*sizeof(ucenik),SEEK_CUR);
	fread(&ucenik,sizeof(ucenik),1,bin);
	prez=ucenik.prezime;
	fseek(bin,-1L*sizeof(ucenik),SEEK_CUR);
	int trazsif;
	while(fread(&ucenik,sizeof(ucenik,1,bin))==1){
		if(strcmp(ucenik.prezime==prez)==0){
			trazsif=ucenik.sifra;
		}
	}
	fseek(bin,(trazsif-1)*sizeof(ucenik),SEEK_SET);
	fread(&ucenik,sizeof(ucenik),1,bin);
	ucenik.koef=srvr;
	fclose(bin);
	return 0;
	//zera krivo
	
}