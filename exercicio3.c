#include <stdio.h>

void main(){
int vetor[16],i,j;
for (i = 0; i<=7 ;i++ ){
    printf("digite os numero do vetor :  ");
    scanf("%d",&vetor[i]);
}
for (j = 0; j<=7 ;j++ ){
    printf("Digite numeros do vetor : ");
    scanf("%d",&vetor[j]);
}
for (i = 0; i<=7 ;i++ ){
    printf("Valores da 8 primeiras posicoes normais :  %d", vetor[i]);
    printf("\n");
}
for (j = 0; j<=7 ;j++ ){
    printf("Valores da 8 ultimas posicoes normais :  %d", vetor[j]);
    printf("\n");
}
printf("\n\n\n");
for (j = 0; j<=7 ;j++ ){
    printf("Valores da 8 primeiras posicoes invertidas posicoes invertidas :  %d", vetor[j]);
    printf("\n");
}
for (i = 0; i<=7 ;i++ ){
    printf("Valores da 8 ultimas  posicoes invertdas :  %d", vetor[i]);
    printf("\n");
}
}



