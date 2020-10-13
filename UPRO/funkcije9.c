#include <stdio.h>
unsigned int getbit(unsigned int m, unsigned int n) {
	int rez;
	rez=m>>n & 0x1;
	return rez;
}
int main(void) {
	unsigned int x, y;
	printf("upisite nenegativni cijeli broj > ");
	scanf("%u", &x);
	printf("upisite redni broj bita > ");
	scanf("%u", &y);
	printf("vrijednost bita je %u", getbit(x, y));
	return 0;
}