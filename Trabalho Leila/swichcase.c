#include <stdio.h>

void comecotrabalho(int i){
    printf("\n\n");
printf("/////////////////////////////////////// BEM VINDO AO TRABALHO DO FINAL DO SEMESTRE ///////////////////////////////////// \n");
printf("/////////////////////////////////////// VOCE ESTA NO EXERCICIO DE NUMERO %i        /////////////////////////////////////",i);
printf("\n");
}
void fimtrabalho(){
printf("\n");
printf("\n");
printf("/////////////////////////////////////// OBRIGADO POR RODAR O CODIGO                ///////////////////////////////////// \n");
printf("/////////////////////////////////////// AUTHOR: GUSTAVO DIAS MONTEIRO              /////////////////////////////////////");
printf("\n\n");
}
void lerhoratrabalhada(float *x){
printf("Insira Quantas horas voce trabalha no mes \t");
scanf("%f",&*x);
}
void lerganhohora(float *x){
printf("Insira Quantas horas voce trabalha no mes \t");
scanf("%f",&*x);
}
void calculotrabalho(float *x, float *y, float *z){
*x = *y * *z;
}
void juros(float *x, float *y, float *z){
if (*x > 40){ //x = horatrabalhada
    *y = 1.5* *z; // y = taxa e z = salariototal
    printf("O Seu Salario teve acrescimo pois voce trabalhou mais de 40 horas por mes ele foi de %f R&  ",*y);
}else{
    printf("O Seu Salario nao teve acrescimo pois voce trabalho 40 horas ou menos por mes e ele foi de %f R$  ",*z);

}
}
void insiranumeros(int x[10]){
for (int i = 0;i<10 ;i++ ){
    printf("insira um numero \t voce esta na posicao : %d \t",i);
    scanf("%d",&x[i]);
}}
void calculo(int vetor[10],int aloc){
     aloc = 0;
for (int i = 0;i<10 ;i++ ){
    if (vetor[i] < 40){
    aloc = aloc + vetor[i];
    }
}
    printf("a soma dos numeros menores que 40 foi de :\t  %d \n",aloc);

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
float salariohora ,horatrabalhada ,salariototal ,taxa,nrtotal,valormer,valortotal,media; ;
int numeros[10],aloc = 0,i;
do
{
    printf ("Digite o nr do exercicio que voce quer 22,64 ou 68 ou 0 para sair: ");
  scanf("%d", &i);



switch (i)
{
       case 22:
    comecotrabalho(i);
        lerhoratrabalhada(&horatrabalhada);
    lerganhohora(&salariohora);
    calculotrabalho(&salariototal,&salariohora,&horatrabalhada);
    juros(&horatrabalhada,&taxa,&salariototal);
    fimtrabalho();
    break;
case 64:
    comecotrabalho(i);
    insiranumeros(&numeros[10]);
    calculo(&numeros[10],aloc);
    fimtrabalho();
    break;
case 68:
comecotrabalho(i);
mercadoria(&nrtotal);
valor(&valormer);
conta(&valortotal,&nrtotal,&valormer,&media);
mostrar(&valortotal,&media);
fimtrabalho();
break;
case 0:
fimtrabalho();
    break;
default:
    printf("Valor desconhecido");
    break;
}}
while (i != 0);

}



