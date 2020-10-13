#include <stdio.h>
int main(void) {
	char ulaz[101];
	char izlaz[101];
	printf("upisite niz: ");
	fgets(ulaz,101,stdin);
	int i, j=0;
	int duljina;
	while(ulaz[duljina] != '\0') {
		duljina++;
	}
	for(i=0;i<duljina;i++){
		if(ulaz[i] > 'A' && ulaz[i] < 'Z' && j % 2 == 0) {
			izlaz[j]=ulaz[i];
			j++;
			
		} else if(ulaz[i] > 'a' && ulaz[i] < 'z' && j % 2 != 0){
			izlaz[j]=ulaz[i];
			j++;
			
		}
	} 
	izlaz[j]='\0';
	printf("%s", izlaz);
	return 0;
}

	
	
		
		
		