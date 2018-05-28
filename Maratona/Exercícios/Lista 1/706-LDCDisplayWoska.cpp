#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length( char string[] )
{
     int  count;

     for ( count = 0; string[ count ] != '\0'; ++count );
     return count;
}

int main(){
  char matriz[10][5][3] = //matriz[n][l][c]
  {
    ' ','-',' ','|',' ','|',' ',' ',' ','|',' ','|',' ','-',' ', //0
    ' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ', //1
    ' ','-',' ',' ',' ','|',' ','-',' ','|',' ',' ',' ','-',' ', //2
    ' ','-',' ',' ',' ','|',' ','-',' ',' ',' ','|',' ','-',' ', //3
    ' ',' ',' ','|',' ','|',' ','-',' ',' ',' ','|',' ',' ',' ', //4
    ' ','-',' ','|',' ',' ',' ','-',' ',' ',' ','|',' ','-',' ', //5
    ' ','-',' ','|',' ',' ',' ','-',' ','|',' ','|',' ','-',' ', //6
    ' ','-',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ',' ', //7
    ' ','-',' ','|',' ','|',' ','-',' ','|',' ','|',' ','-',' ', //8
    ' ','-',' ','|',' ','|',' ','-',' ',' ',' ','|',' ','-',' '  //9
  };

  int tamanho = 3;
 

  int j;
  int i;
  int k;
  int n;
  int m;
    int w = 0;
    char in[11];
    scanf("%[ 0-9]",in);
    int s=atoi(in);    
    char *size = strstr(in," ");
    size++;
    int qtd = length(size);       
    tamanho=s;
    char caracter[2];
    int numero[qtd];
    for(int i=0;i<qtd;i++){
            caracter[0]=*size++;
            numero[i]=atoi(caracter);                                                   
    }      
  for (j = 0; j<5; j++) { //linha
    for (i = 0; i<qtd; i++) { //numero
//  for (i = 0; i<numero.length; i++) { //numero
      for (k = 0; k<3; k++) { //coluna
        printf( "%c",matriz[ numero[i] ][j][k] );
        if (tamanho>1 && k==1) {
          for (n = 0; n<tamanho-1; n++) {
            printf( "%c",matriz[ numero[i] ][j][k] );
          }
        }
        printf(" ");
      }
    }  
    if (tamanho>1 && (j==1 || j==3)) { //coluna
      for (m = 0; m<tamanho-1; m++) {
        printf("\n");
        for (i = 0; i<qtd; i++) { //numero
//        for (i = 0; i<numero.length; i++) { //numero
          for (k = 0; k<3; k++) { //coluna
            printf( "%c",matriz[ numero[i] ][j][k] );
            if (tamanho>1 && k==1) {
              for (n = 0; n<tamanho-1; n++) {
                printf( "%c",matriz[ numero[i] ][j][k] );
              }  
            }
            printf(" ");
          }
        }
      }
    }
    printf("\n");
  }
  system("PAUSE");
}
