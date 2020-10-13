#include <stdio.h>
int main(void) {
	int m,n;
	printf("upisite ");
	scanf("%d %d", &m, &n);
	int polje[m][n], i, j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%d", &polje[i][j]);
		}
	}
	printf("Rezultat :\n");
	for(i=0;i<m;i++){
		int indmax=0;
		int bristi=0;
		for(j=1;j<n;j++){
			if(polje[i][j]>polje[i][indmax]) {
				indmax=j;
			}
		}
		for(j=0;j<n;j++) {
			if(polje[i][indmax]==polje[i][j]){
			bristi++;
		}
		}
		if(bristi==1) {
			printf("(%d %d)\n", i, indmax);
		}
	
	}
	
	return 0;
}
			