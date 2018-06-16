#include <stdio.h>
void mercadoria(float *x){
printf("insira o numero total de mercadorias em estoque \t");
scanf("%f",&*x);
}
void valor(float *x){
printf("insira o valor de cada mercadoria\t ");
scanf("%f",&*x);
}
void conta(float *valor,float *nrtotal,float *mercad,float *media){
*valor = *nrtotal * *mercad ;
*media = *nrtotal / *mercad;
}
void mostrar(float *x,float *y){
printf("o valor total das mercadorias foi de  %f Reais \n e a media foi de  %f Reais",*x,*y);
}
void main(){
float nrtotal,valormer,valortotal,media;
mercadoria(&nrtotal);
valor(&valormer);
conta(&valortotal,&nrtotal,&valormer,&media);
mostrar(&valortotal,&media);
}




