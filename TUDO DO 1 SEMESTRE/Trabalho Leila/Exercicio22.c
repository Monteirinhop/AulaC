#include <stdio.h>

void main(){

float salariohora = 0,horatrabalhada = 0,salariototal = 0,taxa = 0;

printf("Insira Quanto voce ganha por hora \t");
scanf("%f",&salariohora);
printf("Insira Quantas horas voce trabalha no mes \t");
scanf("%f",&horatrabalhada);
salariototal = horatrabalhada*salariohora;
if (horatrabalhada > 40){
    taxa = 1.5*salariototal;
    printf("O Seu Salario teve acrescimo pois voce trabalhou mais de 40 horas por mes ele foi de %f    ",taxa);
}else{
    printf("O Seu Salario nao teve acrescimo pois voce trabalho 40 horas ou menos por mes e ele foi de %f    ",salariototal);

}
}


