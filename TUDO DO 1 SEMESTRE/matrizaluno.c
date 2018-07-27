#include <stdio.h>

void main(){
float nota[2][4],media[2],soma,mediatotal;
int i,j;
 for(i = 0; i<=1 ; i++ ){
    for (j = 0;j <=3 ;j++ ){
        printf("digite uma nota :  ");
        scanf("%f",&nota[i][j]);

    }

}
for(i = 0; i<=1 ; i++ ){
        soma = 0;
    for (j = 0;j <=3 ;j++ ){
        soma += nota[i][j];
    }
    media[i]=soma/4;
}
soma=0;
for (i = 0;i<=1 ;i++ ){
    soma +=media[i];
}
mediatotal = soma/2;
for (i = 0;i<=1 ;i++ ){
    printf("\n A Media do aluno %d eh :%f",i,media[i]);
}
printf("\n A Media da turma foi de : %f", mediatotal);

}



