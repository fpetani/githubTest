#include <stdio.h>
int main(void) {
  int n, fakt=1, i;
  printf(" upišite broj > ");
  scanf("%d", &n);
  for(i = 1; i <= n  ; i = i+1) {
  fakt = fakt * i;
} printf("%d\n", fakt);
return 0;
}
   