#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	FILE *bin=fopen("slova.bin","rb");
	int brrand,i=0;
	srand((unsigned int)time(NULL));
	char c;
	do{
	 brrand=rand()%63;
	 fseek(bin,(brrand-1)*sizeof(char),SEEK_SET);
	 fread(&c,sizeof(c),1,bin);
	 printf("%c\n",c);
	 i++;
	}while(i<40 && c != 'X');
	fclose(bin);
	return 0;
}