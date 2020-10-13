#include <stdio.h>
int main(void) {
	char niz[101];
	printf("upisite niz > ");
	fgets(niz, 101, stdin);
	printf("upisite dva broja ");
	int a, b;
	scanf("%d, %d", &a, &b);
	char kript[101];
	int i=0;
	while(niz[i] != '\0') {
		kript[i]=(((niz[i] - 'A')*a + b) % 26) + 'A';
		i++;
	} niz[i] = '\0';
	}
	printf("ispisite kriptirani niz: %s", kript);
	printf("ispisite ulazni niz: %s", niz);
	
	return 0;
}