#include <stdio.h>
#include "proto.h"
int x = 20;
void fun2(void) {
 x += 4;
 printf("%d\n", x);
}