#include <stdio.h>
int main(void) {
	int a;
	int zapamti;
	printf("upisite brojeve");
	int suma;
	scanf("%d %d", &a);
	zapamti=a;
	suma=a;
	
	do{
		zapamti=a;
		scanf("%d", &a);
		suma+=a;
		
	}while (a>zapamti);
	suma-=a;
	printf("%d", suma);
	
	return 0;
}
