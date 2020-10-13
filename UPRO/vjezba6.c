#include <stdio.h>
#include <math.h>
int main(void) {
 int djelitelj, brojisp=0, n, dijeljeno;
 scanf("%d", &n);
 
  djelitelj=2;
  dijeljeno=0;
  while(djelitelj <= sqrt(n) && dijeljeno == 0) {
   if(n % djelitelj == 0) {
    dijeljeno = 1;
   }
    djelitelj+=1;
  } 
  if(dijeljeno == 0 || n == 1) {
    printf("%d\n", n);    
  }
  }
return 0;
}
  
 
 
   
  
 

 
 
  
   
 
 