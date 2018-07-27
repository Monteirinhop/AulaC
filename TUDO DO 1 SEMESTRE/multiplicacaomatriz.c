#include <stdio.h>
int main(){

int m1[2][2],m2[2][2],m3[2][2],i,j,k;
for(i = 0; i<=1 ; i++ ){
    for (j = 0;j <=1 ;j++ ){
        printf("digite um valor para sua matriz 1 :  ");
        scanf("%d",&m1[i][j]);
    }
}
for(i = 0; i<=1 ; i++ ){
    for (j = 0;j <=1 ;j++ ){
        printf("digite um valor para sua matriz 2 :  ");
        scanf("%d",&m2[i][j]);
    }
}
    printf("\n");
        for (i=0;i<=1; i++) {
      for (j=0; j<=1; j++) {
        for (k=0; k<=1; k++) {
          m3[i][j] = (m1[i][k] * m2[k][j]);
          m3[i][j] += (m1[i][k] * m2[k][j]);
        }

      }

    }

    for (i=0; i<=1; i++) {
      for (j=0; j<=1; j++) {
        printf("\t %d", m3[i][j]);

      }

      printf("\n");

    }

}
