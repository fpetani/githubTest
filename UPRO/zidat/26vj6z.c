#include <stdio.h>
int main(void){
	FILE *bin=fopen("fibo.bin","rb");
	int n;
	printf("upisite n>");
	scanf("%d", &n);
	int broj,i;
	for(i=0;i<n;i++){
		fread(&broj,sizeof(int),1,bin);
		printf("%d\n", broj);
	}
	fclose(bin);
	return 0;
}