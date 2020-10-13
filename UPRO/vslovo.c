#include <stdio.h>
int slovo(char c) {
	int rez;
	if( c >= 'A' && c <= 'Z') {
		rez=1;
	} else {
		rez=0;
	}
	return rez;
}
int main(void) {
	char slova;
	printf(" Upisite znak > ");
	scanf("%c", &slova);
    if(slovo(slova) == 1) {
		printf(" jest veliko slovo");
	}else{
		printf(" nije veliko slovo");
	}
	return 0;
}

	
		