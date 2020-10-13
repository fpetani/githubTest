#include <stdio.h>
int main(void){
	FILE *bin=fopen("predmeti1.bin","rb");
	struct pred_s{
		int sifpr;
		char imepr[41];
		int brst;
	}predmet;
	while(fread(&predmet,sizeof(predmet),1,bin)==1){
		printf("%d, %s, polozilo %d\n",
		predmet.sifpr,predmet.imepr,predmet.brst);
	}
	fclose(bin);
	return 0;
	
}