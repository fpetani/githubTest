#include <stdio.h>
int maks(int *x, int *y){
	if(*x > *y){
		return *x;
	}else{
		return *y;
	}
	
}
int main(void){
	int a, b;
	printf("Upisite dva cijela broja > ");
	scanf("%d %d", &a, &b);
	printf("rezultat je %d", maks(&a, &b));
	return 0;
}