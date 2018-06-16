#include <stdio.h>

void comecotrabalho(){
printf("/////////////////////////////////////// BEM VINDO AO TRABALHO DO FINAL DO SEMESTRE ///////////////////////////////////// \n");
printf("/////////////////////////////////////// VOCE ESTA NO EXERCICIO DE NUMERO 22        /////////////////////////////////////");
printf("\n");
}
void fimtrabalho(){
printf("\n");
printf("\n");
printf("/////////////////////////////////////// OBRIGADO POR RODAR O CODIGO                ///////////////////////////////////// \n");
printf("/////////////////////////////////////// AUTHOR: GUSTAVO DIAS MONTEIRO              /////////////////////////////////////");
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
void main(){
float salariohora ,horatrabalhada ,salariototal ,taxa ;
comecotrabalho();
lerhoratrabalhada(&horatrabalhada);
lerganhohora(&salariohora);
calculotrabalho(&salariototal,&salariohora,&horatrabalhada);
juros(&horatrabalhada,&taxa,&salariototal);
fimtrabalho();
}


