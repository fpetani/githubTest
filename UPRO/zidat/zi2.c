#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gen(int *polje,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(polje+n*i+j)=rand()%2;
		}
	}
	return;
}
int main(void){
	int polje[50][100];
	for(int i=0;i<10;i++){
		gen(&polje[i][0],3,5);
		for(int j=0;j<3;j++){
			for(int z=0;z<5;z++){
				printf("%d",polje[j][z]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}