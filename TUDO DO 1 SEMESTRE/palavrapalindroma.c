#include <stdio.h>

void main(){
    char string[41],contrario[41];
    int i,j,total=0,erro=0;

    printf("Digite uma palavra de até 41 caracter   ");
    scanf("%s",&string);

    total = strlen(string);
    j = total;
    total++;
    j--;
    for (i=0;i<total ;i++ ){
        contrario[i] = string[j];
        j--;
    }
        total--;
    for(i=0; i < total; i++) {
        if(string[i] != contrario[i]) { erro = 1; }
}
if(erro == 1) printf("\nNao e palindromo.");
else printf("\nE palindromo.");
}
