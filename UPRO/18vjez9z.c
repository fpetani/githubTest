#include <stdio.h>
#include <math.h>
#include "mnozi.h"
typedef struct{double x; double y;}tTocka;
double udaljtocka(tTocka tocka1, tTocka tocka2){
	double udaljenost;
	udaljenost=1.* sqrt(pow(tocka1.x-tocka2.x,2)+pow(tocka1.y-tocka2.y,2));
	return udaljenost;
	
}
int main(void){
	tTocka tocka1, tocka2;
	printf("upisite prvu tocku>");
	scanf("%lf %lf", &tocka1.x, &tocka1.y);
	printf("upisite drugu tocku>");
	scanf("%lf %lf", &tocka2.x, &tocka2.y);
	printf("%lf", udaljtocka(tocka1,tocka2));
	return 0;
}