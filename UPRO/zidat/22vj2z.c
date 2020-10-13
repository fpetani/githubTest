#include <stdio.h>
#include <string.h>
int main(void){
	char s1[80];
	char s2[80];
	char c, i=0,j=0;
	while((c=getchar())!='X'){
		s1[i++]=c;
	}
	s1[i]='\0';
	while((c=getchar()) != 'Y'){
		s2[j++]=c;
	}
	s2[j]='\0';
	i=0;
	while (s1[i] != '\0')
		putchar(s1[i++]);
		printf("\n");
	i = 0;
	while (s2[i] != '\0')
		putchar(s2[i++]);
 return 0;
}
