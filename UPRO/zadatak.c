#include <stdio.h>
int main(void) {
	int m,n;
	printf("upisite m i n\n");
	scanf("%d %d", &m, &n);
	int matrica[m][n];
	int suma=0, i, j, stupmin=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &matrica[i][j]);
		}
	}
	for(i=0;i<m;i++){
		suma+=matrica[i][stupmin];
	}
	int sumatest=0;
	for(j=1;j<n;j++) {
		sumatest=0;
		for(i=0;i<m;i++) {
			sumatest+=matrica[i][j];
		} 
		if (sumatest < suma) {
			stupmin=j;
			suma=sumatest;
		}
	}
	for(i=0;i<m;i++){
		printf("%d\n", matrica[i][stupmin]);
	}
	return 0;
}