#include <stdio.h>
int main(void) {
 
 int posmakDesno, i;
 for(i=0;i<10000;i++){
	 int bit=0;
	for (posmakDesno = 31; posmakDesno >= 0; posmakDesno--) {
		if((i >> posmakDesno & 0x1) == 1) {
		bit++;
		}
	}
	if(bit==4) {
		printf("%d\n", i);
	}
 }
 
 return 0;
}
