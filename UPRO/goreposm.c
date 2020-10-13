#include <stdio.h>
int main(void) {
	int m, n;
	printf("upisite dimenzije ");
	scanf("%d %d", &m, &n);
	int polje[m][n];
	int i, j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%d", &polje[i][j]);
		}
	}
	int pomocni;
	for(j=0;j<n;j++){
		pomocni=polje[0][j];
		for(i=1;i<m;i++) {
		polje[i-1][j]=polje[i][j];
		}
		polje[m-1][j]=pomocni;
		
		
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("%4d", polje[i][j]);
		}
		printf("\n");
	}
	return 0;
}

	