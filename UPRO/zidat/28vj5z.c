#include <stdio.h>
int main(void){
	FILE *predmeti1=fopen("predmeti1.bin","wb");
	FILE *predmeti2=fopen("predmeti2.bin","wb");
	FILE *ulaz=fopen("predmeti.txt","r");
	struct pred_s{
		int sifpr;
		char imepr[41];
		int brst;
	}predmet;
	predmet.brst=0;
	
	while(fscanf(ulaz,"%d %[^\n]",&predmet.sifpr,predmet.imepr)==2){
		fwrite(&predmet,sizeof(predmet),1,predmeti1);
		fseek(predmeti2,(predmet.sifpr -1000-1)*sizeof(predmet),SEEK_SET);
		fwrite(&predmet,sizeof(predmet),1,predmeti2);
	}
	fclose(predmeti1);
	fclose(predmeti2);
	fclose(ulaz);
	return 0;
}
	