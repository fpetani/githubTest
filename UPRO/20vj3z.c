#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DG 10.0
#define GG 15.0

int main(void){
	int i;
	int brojac[10]={0};
	srand((unsigned)time(NULL));
	for(i=0;i<=5000000;i++){
		float test=((float)rand()/RAND_MAX*(GG-DG)+DG);
		if((test - DG) >=0.0 && (test - DG)<=0.5){
			++brojac[0];
		}
		else if((test - DG) >0.5 && (test - DG)<=1.0){
			++brojac[1];
		}
		else if((test - DG) >1.0 && (test - DG)<=1.5){
			++brojac[2];
		}
		
		else if((test - DG) >1.5 && (test - DG)<=2.0){
			++brojac[3];
		}
		else if((test - DG) >2.0 && (test - DG)<=2.5){
			++brojac[4];
		}
		else if((test - DG) >2.5 && (test - DG)<=3.0){
			++brojac[5];
		}
		else if((test - DG) >3.0 && (test - DG)<=3.5){
			++brojac[6];
		}
		else if((test - DG) >3.5 && (test - DG)<=4.0){
			++brojac[7];
		}
		else if((test - DG) >4.0 && (test - DG)<=4.5){
			++brojac[8];
		}
		else if((test - DG) >4.5 && (test - DG)<=5.0){
			++brojac[9];
		}
	}
	
	for(i=0;i<10;i++){
			printf("%f - %f = %d\n", DG+((float)i/2), DG+((float)i/2)+0.5, brojac[i]);
			
	}
	return 0;
		
	}
	
	
}