#include <stdio.h> 
void sumeredaka(int m, int n,int *p, int *sume){
	int i,j;
	for(i=0;i<m;i++){
		int suma=0;
		for(j=0;j<n;j++){
			suma+=*(p+n*i+j);
		}
		*(sume+i)=suma;
	}
	return;
}
int main(void){
	int sume[3];
	int polje[3][4];
	int i ,j;
	printf("upisite clanove polja: ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	sumeredaka(3, 4, &polje[0][0], sume);
	for(i=0;i<3;i++){
		printf("%d\n", sume[i]);
	}
	return 0;
}