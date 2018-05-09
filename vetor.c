#include <stdio.h>
void main(){
int n,soma = 0,vetor[4];
float media;
for (int i = 1;i<=3 ;i++ ){
    printf("digite os numero do vetor: %d ",i);
    scanf("%d",&vetor[i]);
    soma+=vetor[i];
}
printf("a soma eh : %d ",soma);
}
