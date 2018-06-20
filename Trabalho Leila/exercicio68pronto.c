#include <stdio.h>

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



void main(){
float quantidade,valormercadoria,total,media;
InsiraMercadoria(&quantidade);

ValorMercadoria(&valormercadoria,&quantidade,&total);

FazerMedia(&total,&quantidade,&media);


}




