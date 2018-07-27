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
scanf("%f",x);
}
void lerganhohora(float *x){
printf("Insira Quanto voce ganha por hora \t");
scanf("%f",x);
}
void calculotrabalho(float *salariototal, float *salariohora, float *horatrabalhada){
if (*horatrabalhada > 160){
    float horasextras = (*horatrabalhada - 160)*1.5f;
    float ganho = *salariohora * *horatrabalhada;
    *salariototal = horasextras + ganho;
    printf("O Seu Salario teve acrescimo pois voce trabalhou mais de 40 horas por semana ele foi de %f R$, sendo desse valor o acrescimo de %f R$ ",*salariototal,horasextras);
}else{
    *salariototal = *salariohora * *horatrabalhada;
    printf("O Seu Salario nao teve acrescimo pois voce trabalho 40 horas ou menos por semana e ele foi de %f R$  ",*salariototal);

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
void InsiraMercadoria(float *Quantidade){
 printf("Insira a quantidade de mercadorias que voce : ");
        scanf("%f",Quantidade);
}
void ValorMercadoria(float *ValorMercadoria, float *Quantidade, float *Total){
for (int i = 0; i < *Quantidade ;i++ ){
    printf("Insira o valor de da mercadoria do tipo %i  : ", (i+1));
    scanf("%f",ValorMercadoria);
    *Total += *ValorMercadoria;
}
printf("o Total foi de : %f", *Total);
}
void FazerMedia(float *Total, float *Quantidade,float *Media){
*Media = *Total / *Quantidade;
printf("\n A Media foi de : %f",*Media);
}
void FazFib(int x){
printf("Digite Quantas vezes se eh para fazer a seq de fib: ");
scanf("%d",&x);
int n2 = 0,n1 = 1, n0;
     for(int i=0; i < x; i++)
  {
    n0 = n1+n2;
    printf("%d ", n0);
    n2 = n1;
    n1 = n0;
  }
}
void main(){
float salariohora ,horatrabalhada ,salariototal ,taxa,quantidade,valormercadoria,total,media ;
int numeros[10],aloc = 0,x;
char i;
do
{
    printf ("Digite o nr do exercicio que voce quer 22,64,68, 1 para fibonnaci e 0 para sair para sair: ");
    scanf("%i", &i);



switch (i)
{
       case 22:
    comecotrabalho(i);
        lerhoratrabalhada(&horatrabalhada);
        lerganhohora(&salariohora);
        calculotrabalho(&salariototal,&salariohora,&horatrabalhada);
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
InsiraMercadoria(&quantidade);
ValorMercadoria(&valormercadoria,&quantidade,&total);
FazerMedia(&total,&quantidade,&media);
fimtrabalho();
break;
case 1:
comecotrabalho(i);
FazFib(&x);
fimtrabalho();
break;
case 0:
fimtrabalho();
    break;
default:
    printf("Valor desconhecido \n ");
    break;
}}
while (i != 0);

}



