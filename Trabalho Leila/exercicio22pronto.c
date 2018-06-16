#include <stdio.h>

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
    printf("O Seu Salario teve acrescimo pois voce trabalhou mais de 40 horas por mes ele foi de %f    ",*y);
}else{
    printf("O Seu Salario nao teve acrescimo pois voce trabalho 40 horas ou menos por mes e ele foi de %f    ",*z);

}
}
void main(){
float salariohora ,horatrabalhada ,salariototal ,taxa ;
lerhoratrabalhada(&horatrabalhada);
lerganhohora(&salariohora);
calculotrabalho(&salariototal,&salariohora,&horatrabalhada);
juros(&horatrabalhada,&taxa,&salariototal);
}


