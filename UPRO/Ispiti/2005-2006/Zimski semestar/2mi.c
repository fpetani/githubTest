// preimenovati  mainX() u main()
#include <stdio.h>

int main1(){
   int polje[100];
   int n, i, j, brDjel;
   do{
      scanf("%d", &n);
   }while(n<1 || n>100);
   for(i=0; i<n; i++){
      scanf("%d", &polje[i]);
   }
   for(i=0;i<n;i++){
      brDjel = 0;
      for(j=i+1; j<n; j++){
         if (polje[j] && (polje[i] % polje[j] == 0)) brDjel++;
      }
      printf("%d ", brDjel);
   }
   return 0;
}
  
int main2(){
   int i, n;
   double fp, fn; // MORA se koristiti double ili float inaèe izaðe iz opsega int-a, to se može zakljuèiti iz 3. primjera 
   do{
      scanf("%d", &n);
   }while(n<2 || n>30);
   
   fp = 2;
   fn = 1;
   for(i=3; i<=n; i++){
      if (i%2==0)
         fp *= i;
      else
         fn *= i;                  
   }
   printf("%lf, %lf", fp, fn);    // može i %f
   return 0;
}
int main3(){   
   int n, m, i, j, suma = 0;
   int mat[20][20];    
   scanf("%d %d", &n, &m);
   if (n>=4 && n<=20 && m>=4 && m<=20){
      for(i=0; i<n; i++){
         for(j=0; j<m; j++){
            scanf("%d", &mat[i][j]);  // ovdje zapravo i nije potrebna matrica !!!
            if (i==0 || j==0 || i==n-1 || j==m-1){
               suma += mat[i][j];
            }
         }
      }
      printf("suma1 = %d", suma);
      
      /* Drugo rješenje - možemo oèekivati i naknadno zbrajanje: */
      suma=0;
      for(i=0; i<n; i++){
         suma += mat[i][0] + mat[i][m-1];  // prvi i zadnji stupac 
      }
      for(j=1; j<m-1; j++){
         suma += mat[0][j] + mat[n-1][j];  // prvi i zadnji redak bez "kutnih" elemenata 
      }
      printf("suma2 = %d", suma);
   }   
   return 0;
}

int main4(){   
   int br[100-(-100)+1]={0};    
   int maxi, sum, temp, i, brMjerenja = 0;

   while(1){
      scanf("%d", &temp);
      if(temp>=-100 && temp<=100){
         br[temp-(-100)]++;
         brMjerenja++;
      }else {
         break;
      }
   }
   if (brMjerenja == 0) 
      return 0;
   maxi = sum = 0;

   for(i=0;i<201;i++){
      if (br[i] >= br[maxi]){
         maxi = i;
      }
      sum += br[i] * (i-100);      
   }

   printf("%f %d", (float)sum/brMjerenja, maxi-100);
   return 0;
}