#include <stdio.h>
int main(void){
	FILE *bin=fopen("slucajni.bin","rb");
	int broj;
	for(int i=0;i<50;i++){
		fread(&broj,sizeof(broj),1,bin);
		printf("%4d ", broj);
		
	}
	fclose(bin);
	return 0;
	
}