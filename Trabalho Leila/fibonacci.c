#include <stdio.h>
void numeros(int x){
printf("Digiet quantos numeros voce quer na sua seq fibonacci \t");
scanf("%d",&x);
}
void fibonacci(int num,int test)
{
   if(num==1 || num==2){}

   else{
    test = fibonacci(num-1) + fibonacci(num-2);
   }

}
void main(){
int seq,test;
numeros(&seq);
}




