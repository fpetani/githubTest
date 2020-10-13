#include <stdio.h>
void negativci(int *p,int n){
	int i, brneg=0;
	for(i=0;i<n;i++){
		if(*(p+i)<0 && brneg==0){
			printf("%d ", *(p+i));
			brneg++;
		}
	}
	if(brneg==0){
		printf("nema negativnih");
	}
	
	return;
}
int main(void){
	int n;
	printf("upisite dimenziju");
	scanf("%d", &n);
	int polje[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &polje[i]);
	}
	negativci(polje, n);
	return 0;
}
	