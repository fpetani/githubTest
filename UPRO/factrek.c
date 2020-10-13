#include <stdio.h>
int fact(int n) {
	int rez;	
	if (n > 2){
		rez = n * fact(n - 1);
	return rez;
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}

	