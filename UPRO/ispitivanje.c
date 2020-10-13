#include <stdio.h>
_Bool jeNeparan(int n){
	int suma=0;
	while(n!=0){
		suma+=n%10;
		n=n/10;
	}
	if(suma%2==0){
		return 1;
	}else{
		return 0;
	}
}
int main(void){
	int broj=1;
	while(broj>0 && broj ){
		printf("upisite prirodni broj > ");
		scanf("%d", &broj);
		if(broj > 0 && broj < 100) {
			if(jeNeparan(broj)){
				printf("suma znamenaka broja %d nije neparan broj.\n\n", broj);
			}else{
				printf("suma znamenaka broja %d je neparan broj.\n\n", broj);
			}
		}
	}
	return 0;
}

			
	