#include <stdio.h>
void insiranumeros(int x[10]){
for (int i = 0;i<10 ;i++ ){
    printf("insira um numero \t %d \t",i);
    scanf("%d",&x[i]);
}}
void calculo(int vetor[10],int aloc){
     aloc = 0;
for (int i = 0;i<10 ;i++ ){
    if (vetor[i] < 40){
    aloc = aloc + vetor[i];
    }
}
    printf("a soma dos numeros menores que 40 foi de \t %d \n",aloc);

}
void main(){
int numeros[10],aloc = 0;
insiranumeros(&numeros[10]);
calculo(&numeros[10],aloc);



}



