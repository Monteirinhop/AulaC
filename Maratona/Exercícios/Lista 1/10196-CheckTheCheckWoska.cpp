#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(){
  //N - kNight - Cavalo
  //K - King - Rei
  //Q - Queen - Rainha
  //B - Bishop - Bispo
  //R - Rook - Torre
  //P - Pawn - Pião

  char tabuleiro[8][8];

   //tabuleiro inicial
   // 0   1   2   3   4   5   6   7
   //'r','n','b','q','k','b','n','r', //0
   //'p','p','p','p','p','p','p','p', //1
   //'.','.','.','.','.','.','.','.', //2
   //'.','.','.','.','.','.','.','.', //3
   //'.','.','.','.','.','.','.','.', //4
   //'.','.','.','.','.','.','.','.', //5
   //'P','P','P','P','P','P','P','P', //6
   //'R','N','B','Q','K','B','N','R'  //7

  //Insere os dados no tabuleiro.
  for(int i=0;i<8;i++){
    scanf("%8s",tabuleiro[i]);
  }

  //Verifica a posição dos reis.
  int ia = 0;
  int ja = 0;
  int ib = 0;
  int jb = 0;

  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if (tabuleiro[i][j] == 'k') {
        ia = i;
        ja = j;
      }
      else if (tabuleiro[i][j] == 'K') {
        ib = i;
        jb = j;
      }
    }
  }
  //printf("REI k: %i %i\n", ia, ja);
  //printf("REI K: %i %i\n", ib, jb);
  
  //Tendo a posição do rei, verificar se está em cheque pelo cavalo.
  int mipos;
  int mjpos;

  int mia_cavalo[4];
  mipos = -1;
  if (ia-2>=0) { mia_cavalo[++mipos] = ia-2; }
  if (ia-1>=0) { mia_cavalo[++mipos] = ia-1; }
  if (ia+1<=7) { mia_cavalo[++mipos] = ia+1; }
  if (ia+2<=7) { mia_cavalo[++mipos] = ia+2; }
  
  int mja_cavalo[4];
  mjpos = -1;
  if (ja-2>=0) { mja_cavalo[++mjpos] = ja-2; }
  if (ja-1>=0) { mja_cavalo[++mjpos] = ja-1; }
  if (ja+1<=7) { mja_cavalo[++mjpos] = ja+1; }
  if (ja+2<=7) { mja_cavalo[++mjpos] = ja+2; }
  
  for (int i=0;i<=mipos;i++){
    for (int j=0;j<=mjpos;j++){
      if (tabuleiro[mia_cavalo[i]][mja_cavalo[j]] == 'N') {
        printf("\nCHECK (k -> cavalo)\n");
        break;
      }  
    }
  }

  int mib_cavalo[4];
  mipos = -1;
  if (ib-2>=0) { mib_cavalo[++mipos] = ib-2; }
  if (ib-1>=0) { mib_cavalo[++mipos] = ib-1; }
  if (ib+1<=7) { mib_cavalo[++mipos] = ib+1; }
  if (ib+2<=7) { mib_cavalo[++mipos] = ib+2; }
  
  int mjb_cavalo[4];
  mjpos = -1;
  if (jb-2>=0) { mjb_cavalo[++mjpos] = jb-2; }
  if (jb-1>=0) { mjb_cavalo[++mjpos] = jb-1; }
  if (jb+1<=7) { mjb_cavalo[++mjpos] = jb+1; }
  if (jb+2<=7) { mjb_cavalo[++mjpos] = jb+2; }

  for (int i=0;i<=mipos;i++){
    for (int j=0;j<=mjpos;j++){
      if (tabuleiro[mib_cavalo[i]][mjb_cavalo[j]] == 'n') {
        printf("\nCHECK (K -> cavalo)\n");
        break;
      }  
    }
  }

  //verificar se existe algum pião colocando o rei em check:
  if (ia+1<=7 && ja+1<=7 && tabuleiro[ia+1][ja+1]=='P') { printf("\nCHECK (k -> piao DIR)\n"); }
  if (ia+1<=7 && ja-1>=0 && tabuleiro[ia+1][ja-1]=='P') { printf("\nCHECK (k -> piao ESQ)\n"); }
  
  if (ib-1>=0 && jb+1<=7 && tabuleiro[ib-1][jb+1]=='p') { printf("\nCHECK (K -> piao DIR)\n"); }
  if (ib-1>=0 && jb-1>=0 && tabuleiro[ib-1][jb-1]=='p') { printf("\nCHECK (K -> piao ESQ)\n"); }

  //*************************************************************** para k minúsculo
  
  //verificando a direita do k
    for (int i=(ja+1);i<=7;i++) {
      int tabtest = tabuleiro[ia][i];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'P' || tabtest == 'B') {
        break;
      }
      else if (tabtest == 'R' || tabtest == 'Q') {
        printf("\nCHECK (k -> torre ou rainha DIR)\n");
        break;
      }
    }
    for (int i=(jb+1);i<=7;i++) {
      int tabtest = tabuleiro[ib][i];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'p' || tabtest == 'b') {
        break;
      }
      else if (tabtest == 'r' || tabtest == 'q') {
        printf("\nCHECK (K -> torre ou rainha DIR)\n");
        break;
      }
    }
  //verificando a esquerda do k
    for (int i=(ja-1);i>=0;i--) {
      int tabtest = tabuleiro[ia][i];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'P' || tabtest == 'B') {
        break;
      }
      else if (tabtest == 'R' || tabtest == 'Q') {
        printf("\nCHECK (k -> torre ou rainha ESQ)\n");
        break;
      }
    }
    for (int i=(jb-1);i>=0;i--) {
      int tabtest = tabuleiro[ib][i];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'p' || tabtest == 'b') {
        break;
      }
      else if (tabtest == 'r' || tabtest == 'q') {
        printf("\nCHECK (K -> torre ou rainha ESQ)\n");
        break;
      }
    }
  //verificando abaixo do k
    for (int i=(ia+1);i<=7;i++) {
      int tabtest = tabuleiro[i][ja];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'P' || tabtest == 'B') {
        break;
      }
      else if (tabtest == 'R' || tabtest == 'Q') {
        printf("\nCHECK (k -> torre ou rainha BXO)\n");
        break;
      }
    }
    for (int i=(ib+1);i<=7;i++) {
      int tabtest = tabuleiro[i][jb];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'p' || tabtest == 'b') {
        break;
      }
      else if (tabtest == 'r' || tabtest == 'q') {
        printf("\nCHECK (K -> torre ou rainha BXO)\n");
        break;
      }
    }
  //verificando acima do k
    for (int i=(ia-1);i>=0;i--) {
      int tabtest = tabuleiro[i][ja];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'P' || tabtest == 'B') {
        break;
      }
      else if (tabtest == 'R' || tabtest == 'Q') {
        printf("\nCHECK (k -> torre ou rainha CMA)\n");
        break;
      }
    }
    for (int i=(ib-1);i>=0;i--) {
      int tabtest = tabuleiro[i][jb];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'p' || tabtest == 'b') {
        break;
      }
      else if (tabtest == 'r' || tabtest == 'q') {
        printf("\nCHECK (K -> torre ou rainha CMA)\n");
        break;
      }
    }
  //verificando para SE do k
    int cont;
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ia+cont > 7 || ja+cont > 7) { break; }
      int tabtest = tabuleiro[ia+cont][ja+cont];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'R' || tabtest == 'P' || tabtest == 'N') {
        break;
      }
      else if (tabtest == 'B' || tabtest == 'Q') {
        printf("\nCHECK (k -> bispo ou rainha SE)\n");
        break;
      }
      cont++;
    }
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ib+cont > 7 || jb+cont > 7) { break; }
      int tabtest = tabuleiro[ib+cont][jb+cont];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'r' || tabtest == 'p' || tabtest == 'n') {
        break;
      }
      else if (tabtest == 'b' || tabtest == 'q') {
        printf("\nCHECK (K -> bispo ou rainha SE)\n");
        break;
      }
      cont++;
    }
  //verificando para SW do k
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ia+cont > 7 || ja-cont < 0) { break; }
      int tabtest = tabuleiro[ia+cont][ja-cont];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'R' || tabtest == 'P' || tabtest == 'N') {
        break;
      }
      else if (tabtest == 'B' || tabtest == 'Q') {
        printf("\nCHECK (k -> bispo ou rainha SW)\n");
        break;
      }
      cont++;
    }
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ib+cont > 7 || jb-cont < 0) { break; }
      int tabtest = tabuleiro[ib+cont][jb-cont];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'r' || tabtest == 'p' || tabtest == 'n') {
        break;
      }
      else if (tabtest == 'b' || tabtest == 'q') {
        printf("\nCHECK (K -> bispo ou rainha SW)\n");
        break;
      }
      cont++;
    }
  //verificando para NE do k
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ia-cont < 0 || ja+cont > 7) { break; }
      int tabtest = tabuleiro[ia-cont][ja+cont];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'R' || tabtest == 'P' || tabtest == 'N') {
        break;
      }
      else if (tabtest == 'B' || tabtest == 'Q') {
        printf("\nCHECK (k -> bispo ou rainha NE)\n");
        break;
      }
      cont++;
    }
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ib-cont < 0 || jb+cont > 7) { break; }
      int tabtest = tabuleiro[ib-cont][jb+cont];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'r' || tabtest == 'p' || tabtest == 'n') {
        break;
      }
      else if (tabtest == 'b' || tabtest == 'q') {
        printf("\nCHECK (K -> bispo ou rainha NE)\n");
        break;
      }
      cont++;
    }
  //verificando para NW do k
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ia-cont < 0 || ja-cont < 0) { break; }
      int tabtest = tabuleiro[ia-cont][ja-cont];
      if (tabtest == 'p' || tabtest == 'r' || tabtest == 'b' || tabtest == 'q' || tabtest == 'n' || tabtest == 'R' || tabtest == 'P' || tabtest == 'N') {
        break;
      }
      else if (tabtest == 'B' || tabtest == 'Q') {
        printf("\nCHECK (k -> bispo ou rainha NW)\n");
        break;
      }
      cont++;
    }
    cont = 1;
    for (int i=0;i<=7;i++) {
      if (ib-cont < 0 || jb-cont < 0) { break; }
      int tabtest = tabuleiro[ib-cont][jb-cont];
      if (tabtest == 'P' || tabtest == 'R' || tabtest == 'B' || tabtest == 'Q' || tabtest == 'N' || tabtest == 'r' || tabtest == 'p' || tabtest == 'n') {
        break;
      }
      else if (tabtest == 'b' || tabtest == 'q') {
        printf("\nCHECK (K -> bispo ou rainha NW)\n");
        break;
      }
      cont++;
    }

  system("PAUSE");
}
