#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
   int n;
   int d;
   int picos;

   while (true){
     picos=0;
     scanf("%d", &n);

     if (n==0)
       return 0;

     int amostras[n+2];

     for (int i=0; i<n; i++)
       scanf("%d", &amostras[i]);

     amostras[n] = amostras[0];
     amostras[n+1] = amostras[1];

     if (amostras[0]>amostras[1])
        d=0;
     else d=1;

     for (int i=2; i<n+2; i++){
       if (d==0){
         if (amostras[i-1]<amostras[i]){
           d=1;
           picos++;
         }
       }else{
         if (amostras[i-1]>amostras[i]){
           d=0;
           picos++;
         }
       }
     }
     printf("%d\n", picos);
   }
return 0;
}