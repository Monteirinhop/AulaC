#include <stdio.h>
void comecotrabalho(){
printf("/////////////////////////////////////// BEM VINDO AO TRABALHO DO FINAL DO SEMESTRE ///////////////////////////////////// \n");
printf("/////////////////////////////////////// VOCE ESTA NO EXERCICIO DE NUMERO 68        /////////////////////////////////////");
printf("\n");
}
void fimtrabalho(){
printf("\n");
printf("\n");
printf("/////////////////////////////////////// OBRIGADO POR RODAR O CODIGO                ///////////////////////////////////// \n");
printf("/////////////////////////////////////// AUTHOR: GUSTAVO DIAS MONTEIRO              /////////////////////////////////////");
}
void mercadoria(float *x){
printf("insira o numero total de mercadorias em estoque : \t");
scanf("%f",&*x);
}
void valor(float *x){
printf("insira o valor de cada mercadoria :\t ");
scanf("%f",&*x);
}
void conta(float *valor,float *nrtotal,float *mercad,float *media){
*valor = *nrtotal * *mercad ;
*media = *nrtotal / *mercad;
}
void mostrar(float *x,float *y){
printf("o valor total das mercadorias foi de  %f Reais \n e a media foi de  %f R$",*x,*y);
}
void main(){
float nrtotal,valormer,valortotal,media;
comecotrabalho();
mercadoria(&nrtotal);
valor(&valormer);
conta(&valortotal,&nrtotal,&valormer,&media);
mostrar(&valortotal,&media);
fimtrabalho();
}




