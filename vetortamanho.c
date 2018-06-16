#include <stdio.h>

void main(){
int vetor[9],menor,antecessor;

for (int i = 1; i<=8 ;i++ ){
    printf("digite os numero do vetor: %d ",i);
    scanf("%d",&vetor[i]);
    if(vetor[i]<menor){
    menor=vetor[i];
    antecessor = menor - 1;
}

}
printf("o menor valor do vetor eh : %d  ",menor,"\n");
printf("Seu antecessor eh %d  ",antecessor,"\n");

}

