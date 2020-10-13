#include <stdio.h>
int main(void) {
	int polje[5][10];
	int suma[10];
	int i, j;
	printf("upisite clanove polja :");
	for(i=0; i<10;i++) {
		for(j=0;j<5;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	for(i=0; i<10;i++) {
		suma[i]=0;
		for(j=0;j<5;j++){
			suma[i]+=polje[i][j];
		}
	}
	printf("indeksi stupaca :\n");
	int najveciind=0;
	for(i=1; i<10;i++) {
		for(j=1;j<5;j++){
			if (polje[i][najveciind] < polje[i][j]) {
				najveciind = j;
			}
		}
		if(polje[i][najveciind] == suma[i-1]){
			printf("%d", najveciind);
		}
	}
	return 0;
} 
			
			
		
		
		
			