#include <stdio.h>
int main(void) {
	int n;
	printf(" upisite stupaj matrice ");
	scanf("%d", &n);
	float polje[n][n];
	int i, j;
	for(i=0;i<n;i++) {
		scanf("%f", &polje[0][i]);
	}
	for(i=1;i<n;i++){
		float pomocna=polje[i-1][0];
		for(j=0;j<n-1;j++) {
			polje[i][j]=polje[i-1][j+1];
		}
		polje[i][n-1]=pomocna;
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++){
			printf("%9.4f", polje[i][j]);
		}
		printf("\n");
	}
	return 0;
}