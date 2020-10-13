#include <stdio.h>
int main(void) {
	int m,n;
	printf("upisite m i n > ");
	scanf("%d %d", &m, &n);
	int polje[m][n], i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) {
			scanf("%d", &polje[i][j]);
		}
	}
	int indmin=0;
	for(j=0;j<n;j++) {
		int indmin=0;
		printf("%d. stupac: ", j+1);
		for(i=1;i<m;i++) {
			if(polje[indmin][j] > polje[i][j]) {
				indmin=i;
			}
		}
		for(i=0;i<m;i++) {
			if(polje[i][j]==polje[indmin][j]) {
				printf("(%d, %d)", i, j);
			}
		}
		printf("\n");
	}
	return 0;
}

				
			