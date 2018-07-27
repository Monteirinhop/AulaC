#include <stdio.h>
void main(){
int m1[2][2],m2[2][2],m3[2][2];
insiravalores(&m1);
insiravalores(&m2);
multiplicamatriz(&m3,&m1,&m2);
mostrarmatriz(m3);
}

int insiravalores(int m[2][2]){
    int i,j;
for(i = 0; i<=1 ; i++ ){
    for (j = 0;j <=1 ;j++ ){
        printf("digite um valor para sua matriz   " );
        scanf("%d",&m[i][j]);
    }
}
}
multiplicamatriz(int m[2][2],int m1[2][2],int m2[2][2]){
    int i,j,k;
    printf("\n");
        for (i=0;i<=1; i++) {
      for (j=0; j<=1; j++) {
        for (k=0; k<=1; k++) {
          m[i][j] = (m1[i][k] * m2[k][j]);
          m[i][j] += (m1[i][k] * m2[k][j]);
        }

      }

    }
}
mostrarmatriz(int m[2][2]){
    int i,j;
    for (i=0; i<=1; i++) {
      for (j=0; j<=1; j++) {
        printf("\t %d", m[i][j]);

      }

      printf("\n");

    }
}
