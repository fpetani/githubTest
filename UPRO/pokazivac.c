#include <stdio.h>
void vrati(int *x, int *y){
	char niz[21];
	fgets(niz,21,stdin);
	int i=0;
	while(niz[i] != '\0'){
		if(niz[i] > 'A' && niz[i] < 'Z'){
			(*x)++;
		}else if(niz[i] > 'a' && niz[i] < 'z'){
			(*y)++;
		}
		i++;
	}
	return;
}
			
int main(void){
	int brv=0, brm=0;
	printf("upisite niz > ");
	vrati(&brv, &brm);
	printf("Broj velikih slova: %d\n", brv);
	printf("Broj malih slova: %d\n", brm);
	return 0;
}
	
	
	
	
	