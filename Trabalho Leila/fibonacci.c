#include <stdio.h>
void FazFib(int x){
printf("Digite Quantas vezes se eh para fazer a seq de fib: ");
scanf("%d",&x);
int n2 = 0,n1 = 1, n0;
     for(int i=0; i < x; i++)
  {
    n0 = n1+n2;
    printf("%d ", n0);
    n2 = n1;
    n1 = n0;
  }
}
void main(){
int x;
FazFib(&x);


}




