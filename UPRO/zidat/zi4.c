#include <stdio.h>
int main(void){
	typedef struct ucenik_s{
		int sifra;
		char imeiprez[41];
		float ocjena
	}student;
	FILE *bin=fopen("osoba.bin","rb");
	FILE *tekst=fopen("kandidat.txt","r");
	int sifra;
	float najoc;
	while(fread(&student,sizeof(student),1,bin)){
		int prvi=0;
		if(prvi==0 || student.ocjena>najoc){
			najoc=student.ocjena;
		}
	}
	while(fscanf(tekst,"%d",&sifra)==1){
		fseek(bin,(sifra-1)*sizeof(student),SEEK_SET);
		fread(&student,sizeof(student),1,bin);
		if(student.ocjena==najoc){
			printf("%d %s",student.sifra,student.imeiprez);
		}
	}
	fclose(bin);
	fclose(tekst);
	return 0;
}