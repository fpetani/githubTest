#include <stdio.h>
int main(void) {
	int polje[11][11];
	int i, j;
	for(i=0;i<11;i++){
		for(j=0;j<11;j++) {
			polje[i][j]=8;
		}
	}
	for(i=0;i<11;i++){
		for(j=0;j<11;j++) {
			if(i==0 || j==0 || i==j || i==10 || j==10 || i+j== 10) {
				polje[i][j]=1;
			
		}
	}
	}
	for(i=0;i<11;i++){
		for(j=0;j<11;j++) {
			printf("%2d", polje[i][j]);
		}
		printf("\n");
	}
	return 0;
}
