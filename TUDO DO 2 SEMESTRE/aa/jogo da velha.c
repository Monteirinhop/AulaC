#include <stdio.h>
#define tam 3

void main(){
    int jogador;
    int matriz[tam][tam];
criajogo(jogador);
criaMatriz(matriz[tam][tam]);


}
void criajogo(int player){
    int jogador;
printf("Bem vindo ao jogo da velha");
printf("\n");
printf("Você deseja se o jogador 1 ou 2 ?");
printf("\n");
scanf("%d",&jogador);
if (jogador >= tam){
    printf("opsss, parece que voce digitou errado, insira novamente se voce quer ser o jogador um ou dois.");
    printf("\n");
    scanf("%d",&jogador);
}
 if(jogador == 1){
printf("Parabens voce e o jogador nr 1 !!");
printf("\n");
printf("Preparem-se o jogo ja vai comecar");
 }else{
     printf("Parabens voce e o jogador nr 2 !!");
printf("\n");
printf("Preparem-se o jogo ja vai comecar \n");
 }
}
void criaMatriz(int matriz[tam][tam]){
int matr[tam][tam] ;

for (int i = 0;i<tam ;i++ ){
for (int j = 0;j<tam ;j++ ){
printf("\n%d  ",matr[i][j]);

}}




}


