#include <stdio.h>
#include <string.h>
int main(void) {
 int mbr;
 char ime[20];
 char prezime[20];
 int godina;
 FILE *ulaz=fopen("ulaz1.txt","r");
 while(fscanf(ulaz,"%d%s%s%*d.%*d.%d", 
		&mbr,ime,prezime,&godina)==4){
			if(strstr(ime,"na") != NULL || godina==1987){
				printf("%s %s\n",ime ,prezime);
			}
		}
	fclose(ulaz);	
 return 0;
}