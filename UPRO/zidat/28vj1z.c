#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	srand((unsigned int)time(NULL));
	FILE *bin=fopen("slucajni.bin","wb");
	int brojin,broj,i=0;
	do{
		brojin=rand()%7 + 2;
		fwrite(&brojin,sizeof(broj),1,bin);
		i++;
		for(int j=0;j<brojin;j++){
			broj=rand()%11+150;
			fwrite(&broj,sizeof(broj),1,bin);
			i++;
		}
	}while(i<50);
	fclose(bin);
	return 0;
	
	
	
	
}