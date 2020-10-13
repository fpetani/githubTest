#include <stdio.h>
int getbit(int m, int n){
	int rez;
	rez=m>>n & 0x1;
	return rez;
}
int main(void){
	int i, x;
	printf("upisite nenegativni cijeli broj >");
	scanf("%d", &x);
	for(i=31;i>=0;--i){
		printf("%d", getbit(x,i));
	}
	return 0;
}
