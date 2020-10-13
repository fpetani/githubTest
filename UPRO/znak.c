#include <stdio.h>
int main(void) {
	char niz1[11];
	printf("upisite niz znak i indeks: ");
	fgets(niz1,11,stdin);
	char zn;
	int indeks, i;
	scanf("%c, %d", &zn, &indeks);
	char niz2[11];	
	int duljina=0;
	while(niz1[duljina] != '\0') {
		duljina++;
	}
	for(i=0;i<duljina;i++) {
		if(i==indeks){
			if((niz1[indeks] > 'A' && niz1[indeks] < 'Z') || (niz1[indeks] > 'a' && niz1[indeks] < 'z')){
				niz2[indeks]=zn;
			} else if(niz1[indeks] >= '0' && niz1[indeks] <='9'){
				niz2[indeks]=niz1[indeks];
			}else{
			niz2[indeks]= '?';
		}
		}else{
			niz2[i]=niz1[i];
		}
	}
	printf("%s", niz2);
	return 0;
}
    
		
		
	
	
	