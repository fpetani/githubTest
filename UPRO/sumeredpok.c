#include <stdio.h>
void sumeredaka(int *mat,int m,int n, int *rez){
	int i, j;
	for(i=0;i<m;i++){
		*(rez + i)=0;
		for(j=0;j<n;j++){
			*(rez + i)+=*(mat + n*i + j);
		}
	}
		return;
}
int main(void){
	int polje[3][4];
	int rez[4], i, j;
	printf("upisi clanove polja: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	sumeredaka(&polje[0][0],3,4,rez);
	for(i=0;i<3;i++){
		printf("%d\n", rez[i]);
	}
	return 0;
}