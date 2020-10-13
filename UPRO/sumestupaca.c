#include <stdio.h>
int main(void){
	int polje[5][10],i ,j;
	for(i=0;i<5;i++) {
		for(j=0;j<10;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	int suma[11];
	for(i=0;i<10;i++){
		suma[i]=0;
		for(j=0;j<5;j++){
			suma[i]+=polje[j][i];
		}
	}
	for(i=1;i<10;i++){
		for(j=0;j<5;j++){
			if(suma[i-1]==polje[j][i]){
				printf("%d\n", i);
			}
		}
	}
	return 0;
}

	
		
	
	