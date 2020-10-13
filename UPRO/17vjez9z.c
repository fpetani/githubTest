#include <stdio.h>
void genprim(int gg, int n) {
	int kandidat=gg;
	int j;
	_Bool djeljiv=0;
	while(n!=0){
		
		for(j=2;j<=kandidat/2;j++){
			if(kandidat%j==0){
				djeljiv=1;
			}
		}
		if(djeljiv==0){
			printf("%7d\n", kandidat);
			kandidat++;
			--n;
			
		}else{
			kandidat++;djeljiv=0;
		}
	}
	return;
}
int main(void){
	int gornja, n;
	printf("upisite gg i n >");
	scanf("%d %d", &gornja, &n);
	genprim(gornja,n);
	return 0;
}