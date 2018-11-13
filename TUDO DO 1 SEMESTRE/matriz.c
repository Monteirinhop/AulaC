#include <stdio.h>

void main(){
int matriz[3][3],i,j;
for(i = 0; i<=2 ; i++ ){
    for (j = 0;j <=2 ;j++ ){
        printf("digite um valor para seu vetor :  ");
        scanf("%d",&matriz[i][j]);

    }

}
printf("\n");
for(i = 0; i<=2 ; i++ ){
    for (j = 0;j <=2 ;j++ ){


        printf("\t%d", matriz[i][j]);

    }

}
  printf("\n");
}
