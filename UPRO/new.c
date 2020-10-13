#include <stdio.h>
int main(void) {
	int x, y;
	printf("upisite dva broja");
	scanf("%d %d", &x, &y);
	if((x>=100*y) && (y%2==0 || y < 0)) {
		printf("istina je");
	}else{
		printf("laz je");
	}
	return 0;
}

