#include <stdio.h> 
float kvadrat(float n) {
	float kv;
	kv=(float) n * n;
	return kv;
}
int main(void) {
	float arg;
	float rez;
	scanf("%f", &arg);
	rez = kvadrat(arg);
	printf("%.5f", rez);
	return 0;
	
}

	
