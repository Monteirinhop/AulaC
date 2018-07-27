#include <stdio.h>

void main(){
int numeros[10],aloc = 0,normal=0;
for (int i = 0;i<10 ;i++ ){
    printf("insira um numero \t %d \t",i);
    scanf("%d",&numeros[i]);
}
for (int i = 0;i<10 ;i++ ){
    if (numeros[i] < 40){
    aloc = aloc + numeros[i];
    }
    else{
    normal = numeros[i];
    }


}
printf("a soma dos numeros menores que 40 foi de \t %d",aloc);
printf("\n");
printf("numeros maiores que 40 \t %d",normal);
}


