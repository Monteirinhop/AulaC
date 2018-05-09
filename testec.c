#include <stdio.h>

void main(){
    int n, soma, num;
    float media;
    printf("Digite quantso numeros quer somar \n\n");
    scanf("%d",&n);
    printf("\n");
    soma = 0;
    for (int x=1;x<=n ;x++ ){
        scanf("%d",&num);
        printf("\n");
        soma +=num;
        }
        media = soma/n;
        printf("a soma dos numeros eh igual a: %d \n", soma);
        printf("a Media dos numeros eh igual a: %f \n", media);
}
