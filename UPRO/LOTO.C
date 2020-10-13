#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int bubanj[7]={41};
static int i;
int dajsljkuglicu(void){
	
	int test=0;
	if(i<7){
		
		do{
			int broj=rand()%(40);
			for(int j=0;j<=i;j++){
				if(broj==bubanj[j]){
					test=1;
				}
			}
		}while(test);
		++i;
		return ;
		
	}else{
		return -1;
	}
}
void resetirajbubanj(void){
	for(int j=0;j<7;j++){
		*(bubanj + j)=41;
	}
	i=0;
}
int main(void){
	srand((unsigned)time(NULL));
	int z, j;
	for(z=0;z<10;z++){
		printf("%d. izvlacenje: ", z+1);
		for(j=0;j<7;j++){
			printf("%4d", dajsljkuglicu());
		}
		resetirajbubanj();
		printf("\n");
	}
	return 0;
}