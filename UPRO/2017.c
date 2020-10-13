#include <stdio.h>
int main(void) {
	char ulaz[101];
	char izlaz[101];
	fgets(ulaz, 101, stdin);
	int duljina=0;
	while(ulaz[duljina] !='\0') {
		duljina++;
	}
	int j=0, i;
	if(duljina % 2 == 0) {
		for(i=0;i<duljina;i+=2) {
			if( (ulaz[i] > 'a' && ulaz[i] < 'z') || (ulaz[i+1] > 'a' && ulaz[i+1] < 'z')) {
				izlaz[j]= 'X';
				j++;
			} else {
				izlaz[j]=ulaz[i];
				j++;
				izlaz[j]=ulaz[i+1];
				j++;
			}
		}
		
	}else {
		
		printf("  ");
	}
	izlaz[j]= '\0';
	printf("%s", izlaz);
	return 0;
}

				