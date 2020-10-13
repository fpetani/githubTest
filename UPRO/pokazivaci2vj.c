#include <stdio.h> 
int najveci(int *p, int n){
	int min=*p;
	int pom;
	int i;
	for(i=1;i<n;i++){
		if(min < *(p+i)){
			min = *(p+i);
		}
	}
	return min;
}
int main(void){
	int a[10];
	int i;
	printf("Upisite clanove > ");
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	}
	int *p=a;
	printf("%d", najveci(a,10));
	return 0;
}

	
		
	
