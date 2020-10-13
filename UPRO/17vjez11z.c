#include <stdio.h>
void zamijeni(int *x, int *y) {
 int pom;
 pom = *x;
 *x = *y;
 *y = pom;
 return;
}
void sort1d(int *polje,int n, int silazno){
	int ind_min_max, i, j;
	for (i = 0; i < n - 1; ++i) {
		ind_min_max = i + 1;
	if (silazno) {
		for (j = i + 2; j < n; ++j) {
			if (*(polje + j) > *(polje + ind_min_max)) ind_min_max = j;
		}
		if (*(polje + ind_min_max) > *(polje + i)) {
	zamijeni(polje + ind_min_max, polje + i);
	}
	} else {
	for (j = i + 2; j < n; ++j) {
	if (*(polje + j) < *(polje + ind_min_max)) ind_min_max = j;
	}
	if (*(polje + ind_min_max) < *(polje + i)) {
	zamijeni(polje + ind_min_max, polje + i);
	}
	}
	}
	return;
}
void sortretke2d(int *p, int m, int n, int s){
	int i, j;
	for(i=0;i<n;i++){
		sort1d((p+n*i), n, s);
	}
	return;
}
int main(void){
	int m,n;
	_Bool silazno;
	printf("upisite dimenzije i smjer ");
	scanf("%d %d %c", &m, &n, &silazno);
	int polje[m][n];
	int i,j;
	printf("upisite clanove polja:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	sortretke2d(&polje[0][0],m,n,silazno=='S');
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%5d", polje[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
