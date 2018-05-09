#include<stdio.h>
#include<math.h>

int main(){
    float litros,preco,desconto;
    int tipo;
printf("quantos litros de combustivel voce comprou :");
scanf("%f",&litros);
printf("diga se e gasolina ou alcol ");
scanf("%i", &tipo);
if(litros <= 20){
    if(tipo == 1){
        preco = 2,90 * litros ;
        desconto = preco * (97/100);
    }
    if(tipo == 2){
        preco = 3,30 * litros ;
        desconto = preco * (96/100);
    }
    printf("O seu combustivel eh : %i",tipo,"\n\n");
    printf("\n\n O Valor foi de : \n\n  \n\n %f", preco);
}
if(litros > 20){
    if(tipo == 2){
        preco = 2,90 * litros ;
        desconto = preco * (95/100);
    }
    if(tipo ==1){
        preco = 3,30 * litros ;
        desconto = preco * (96/100);
    }
    printf("O seu combustivel eh : %i",tipo,"\n\n");
    printf("O Valor foi de : \n\n %f", desconto);
}

}
