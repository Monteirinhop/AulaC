#include <stdio.h>

void main(){
float nrtotal,valormer,valortotal,media;
printf("insira o numero total de mercadorias em estoque \t");
scanf("%f",&nrtotal);
printf("insira o valor de cada mercadoria\t ");
scanf("%f",&valormer);
valortotal = nrtotal * valormer ;
media = nrtotal / valormer;

printf("o valor total das mercadorias foi de  %f \n e a media foi de  %f",valortotal,media);
}



