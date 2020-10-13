#include <stdio.h>
int main(void) {
int n, rez;
scanf(" %d", &n);// izracunaj apsolutnu vrijednost
if (n < 0) {
rez = -1 * n;
} else {
rez = n;
}
printf("Ulaz: %d Rezultat: %d", n, rez);
return 0;
}