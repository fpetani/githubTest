#include <stdio.h>
void fibon(int n) {
	if(n==1) {
		printf("%d", 1);
	}else if(n==2){
		printf("%d %d", 1, 1);
	}else{
		int fibo[n];
		fibo[0]=fibo[1]=1;
		int i;
		for(i=2;i<n;i++) {
			fibo[i]=fibo[i-1]+fibo[i-2];
		}
		for(i=0;i<n;i++){
			printf(",%d ", fibo[i]);
		}
	}		
}
int main(void) {
	int n;
	printf("upisite broj clanova ");
	scanf("%d", &n);
	fibon(n);
	return 0;
}

	