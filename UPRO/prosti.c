#include <stdio.h>
int main(void) {
	int dgr, ggr;
	int i,j;
	scanf("%d %d", &dgr, &ggr);
	for(i=dgr;i<=ggr;i++){
		int dijelj=0;
		for(j=2;j<i/2;j++) {
			if(i%j==0){
				dijelj++;
		}
		}
		if(dijelj==0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
				
			
		