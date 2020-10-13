#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int n;
	printf(" upisite n>");
	scanf("%d", &n);
	int i;
	if(n>3 && n<60){
		srand((int)time(NULL));
		for(i=0;i<n;i++){
			printf("%c", rand()%('A'-'Z')+'A');
	}
	}
	return 0;
}
