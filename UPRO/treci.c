#include <stdio.h>
int main(void) {
	char polje[8][8];
	int i, j;
	for(i=0; i<=7;i++){
		for(j=0;j<=7;j++){
			polje[i][j]= 'K';
		}
	}
	int a, b;
	printf("upisite a i b: ");
	scanf("%d %d", &a, &b);
	
	polje[a][b]='T';
	for(i=0;i<8;i++){
		if(polje[a][i] != polje[a][b]){
			polje[a][i]='-';
		}
	}
	for(i=0;i<8;i++){
		if(polje[i][b] != polje[a][b]){
			polje[i][b]='-';
		}
	}
	for(i=0; i<=7;i++){
		for(j=0;j<=7;j++){
			printf("%2c", polje[i][j]);
		}printf("\n");
	}
	return 0;
}
		
	
	