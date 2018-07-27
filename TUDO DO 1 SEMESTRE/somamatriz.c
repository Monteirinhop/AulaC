#include <stdio.h>

int main(){
int matriz1[3][3],matriz2[3][3],matrizsoma[3][3],i,j;
for(i = 0; i<=2 ; i++ ){
    for (j = 0;j <=2 ;j++ ){
        printf("digite um valor para sua matriz 1 :  ");
        scanf("%d",&matriz1[i][j]);
    }
}
for(i = 0; i<=2 ; i++ ){
    for (j = 0;j <=2 ;j++ ){
        printf("digite um valor para sua matriz 2 :  ");
        scanf("%d",&matriz2[i][j]);
    }
}
for(i = 0; i<=2 ; i++ ){
            printf("\n");
    for (j = 0;j <=2 ;j++ ){

        printf("\t%d", matriz1[i][j]+matriz2[i][j]);

    }
}
}
