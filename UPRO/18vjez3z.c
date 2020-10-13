#include <stdio.h>
void trazizadnjiznak(char *p, char znak){
	int ind_zadnji=0, i=0;
	while(*(p+i) != '\0'){
		if(*(p+i)==znak){
			ind_zadnji=i;
		}
		i++;
	}
	if(ind_zadnji==0){
		printf("nema znaka");
	}else{
		printf("%d", ind_zadnji);
	}
	return;
	
}
int main(void){
	char niz[50];
	printf("upisite niz >");
	fgets(niz,50,stdin);
	char znak;
	printf("upisite znak >");
	scanf("%c", &znak);
	trazizadnjiznak(niz,znak);
	return 0;
}