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
int main(){
float salariohora ,horatrabalhada ,salariototal ;
comecotrabalho();
lerhoratrabalhada(&horatrabalhada);
lerganhohora(&salariohora);
calculotrabalho(&salariototal,&salariohora,&horatrabalhada);
fimtrabalho();
return 0;
}
