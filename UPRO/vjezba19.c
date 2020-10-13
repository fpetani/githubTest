#include <stdio.h>
#define maxniz 101
int main(void) {
	char niz[maxniz];
	fgets(niz,maxniz,stdin);
	char niz1[maxniz];
	int a='A',z='Z';
	int duljina = 0;
	while(niz[duljina] != '\0') {
		duljina+=1;
	}
	int parni=2, i = 0, j=0;
	while(i < duljina){
		
	
		if(niz[i] > a && niz[i] < z && parni % 2 == 0) {
			niz1[j]=niz[i];
			parni+=1;
			a=a + 'a' -'A';
			z=z+'a' -'A';
			j+=1;
		} else if(niz[i] > a && niz[i] < z && parni % 2 != 0) {
			niz1[j]=niz[i];
			parni+=1;
			a=a-('a' -'A');
			z=z-('a' -'A');
			j+=1;
		}
		i+=1;
	}
	printf("%s", niz1);
	return 0;
}
			
	
 
