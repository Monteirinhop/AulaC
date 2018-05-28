#include <stdio.h>
#include <stdlib.h>

int main(){
 int k, n, m, x, y;

 do{
   scanf("%d", &k);
   if (k==0)
     return 0;
   
   scanf("%d%d", &n, &m);
   for (int i=0; i<k; i++){
     scanf("%d%d", &x, &y);

     if (x==n || y==m){
       puts("divisa");
     }else{
       if (x<n){
         if (y<m)
          puts("SO");
         else puts("NO");
       }else{
         if (y<m)
          puts("SE");
         else puts("NE");
       } 
     }
   }
 }while(k!=0);
 
 return 0;
}