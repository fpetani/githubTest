#include <stdio.h>
double zbroj2d(double *p,int m,int n){
	double suma=0.;
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			suma+=*(p+n*i+j);
		}
	}
	return suma;
}
int main(void){
	int m, n;
	printf("upisite dimenzije polja > ");
	scanf("%d %d", &m, &n);
	double polje[m][n];
	printf("upisite clanove polja");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%lf", &polje[i][j]);
		}
	}
	printf("rezultat je %lf", zbroj2d(&polje[0][0],m,n));
	return 0;
}