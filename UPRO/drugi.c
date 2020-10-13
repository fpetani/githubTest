#include <stdio.h>
int main(void) {
	int uplate[1001];
	int sumuplata[1001];
	int i=0;
	for(i=0;i<1001;i++) {
		uplate[i]=0;
		sumuplata[i]=0;
	}
	printf("upisujte uplate(br.racuna i iznos):\n");
	int broj;
	int uplata;
	do {
		scanf("%d %d", &broj, &uplata);
		uplate[broj-10000]+=1;
		sumuplata[broj-10000]+=uplata;
	}while(uplate[broj-10000] <= 2) ;
	int test=0;
	for(i=1; i<1001;i++) {
		if(sumuplata[i]>sumuplata[test]) {
		test=i;
		}
	}
	printf("najveca uplata suma je %d \n", sumuplata[test]);
	printf("brojevi racuna s tim iznosom su:\n ");
	for(i=0;i<1001;i++){
		if(sumuplata[i]==sumuplata[test]) {
			printf("%d\n", i + 10000);
		}
	}
		
	
return 0;
}	
			
		