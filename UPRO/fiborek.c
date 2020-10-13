#include <stdio.h>
unsigned int fibo(unsigned int n) {
	int rez=0;
	if(n==1 || n==2){
		rez=1;
	}else{
		rez=fibo(n-1)+fibo(n-2);
	}
	
	return rez;
}
int main(void) {
	int n;
	printf("upisite broj >");
	scanf("%d", &n);
	printf("%u", fibo(n));
}

		