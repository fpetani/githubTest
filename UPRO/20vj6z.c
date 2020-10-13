#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gadjajpolje(int *polje, int m, int n,int brhit){
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			*(polje + n * i + j) = 0;
	for(int i=0;i<brhit;i++){
		int slucajni=rand()%(m*n);
		++*(polje + slucajni);
	}
	return;
	
}
int main(void){
	srand((unsigned)time(NULL));
	int m=rand()%(6)+5;
	int n=rand()%(11)+10;
	int polje[m][n];
	int brhit;
	printf("upisite broj hitaca>");
	scanf("%d", &brhit);
	gadjajpolje(&polje[0][0],m,n,brhit);
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d", polje[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
