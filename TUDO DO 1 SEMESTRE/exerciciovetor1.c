#include <stdio.h>

void main(){
int vetor[12],i;
for (i = 0; i<=11 ;i++ ){
    printf("digite os numero do vetor: %d ",i);
    scanf("%d",&vetor[i]);
}
for (i = 0; i<=11 ;i++ ){
    printf("Valores do vetor  :  %d", vetor[i]);
    printf("\n");
}
printf("a soma do vetor na posição 3 e 4 foi : %d",vetor[3]+vetor[4]);

}


