#include <stdio.h>
int main(void){
	FILE *bin = fopen("slova.bin","wb");
	for(char c = 'A';c <= 'Z';c++){
		fwrite(&c,sizeof(c),1,bin);
	}
	for(char c='a';c<='z';c++){
		fwrite(&c,sizeof(c),1,bin);
	}for(char c='0';c<='9';c++){
		fwrite(&c,sizeof(c),1,bin);
	}
	fclose(bin);
	return 0;
}