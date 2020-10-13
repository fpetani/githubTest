#include <stdio.h>
int main(void) {
int i, a, b;
for (i = 1; i <= 3; i = i + 1) {
printf("%d. zbrajanje\n", i);
printf(" Upisite prvi prirodni broj > ");
scanf("%d", &a);
if (a <= 0) continue;
printf(" Upisite drugi prirodni broj > ");
scanf("%d", &b);
if (b <= 0) continue;
printf("%d + %d = %d\n", a, b, a + b);
}
printf("Kraj.\n");
return 0;
}