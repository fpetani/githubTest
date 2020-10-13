#include <stdio.h>
#include <math.h>

void izracunaj(int x1, int y1, int x2, int y2, int *kvadrant1, float *udaljenost2) {
	if (x1 >= 0 && y1 >= 0) {
		*kvadrant1 = 1;
	} else if(x1 <= 0 && y1 <= 0) {
		*kvadrant1 = 3;
	} else if(x1 <= 0 && y1 >= 0) {
		*kvadrant1 = 2;
	} else if(x1 >= 0 && y1 <= 0) {
		*kvadrant1 = 4;
	} 
	
	if(x1 == 0 && y1 == 0) {
		*kvadrant1 = 0;
	}
	
	*udaljenost2 = sqrt(x2*x2 + y2*y2);
	
}


int main(void) {
	int x1, y1, x2, y2;
	printf("Upisi Tocke (u dva reda) > \n");
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	
	int kvad;
	float u;
	
	izracunaj(x1, y1, x2, y2, &kvad, &u);
	
	printf("kvad: %d udalj: %f", kvad, u);

	
	
	return 0;
} 

