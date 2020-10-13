#include <stdio.h>
int main(void) {
int broj, i, n=0, brojac;
printf("upisite broj > ");
scanf("%d", &broj);
brojac=broj;
while(brojac > 0) {
  brojac = brojac / 2;
  n=n+1;
}
int polje[n];
for(i=n-1;i>=0;i=i-1) {
  polje[i]=broj % 2;
  broj = broj / 2;
}
for(i=0;i<n;i=i+1) {
 printf("%d", polje[i]);
}
return 0;
}
