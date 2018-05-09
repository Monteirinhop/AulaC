#include <stdio.h>

void main(){
int vetor[5],maior;
maior = 0;
for (int i = 1; i<=4 ;i++ ){
    printf("digite os numero do vetor: %d ",i);
    scanf("%d",&vetor[i]);
    if(vetor[i]>maior){
    maior=vetor[i];
}
}
printf("o maior valor do vetor eh : %d  ",maior,"\n");

}

