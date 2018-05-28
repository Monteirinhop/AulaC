#include <iostream>
#include <stdlib.h>
#include <stdio.h>

  char paint[250][250];
  int m, n;


void clear(){
 for (int i=0; i<m; i++)
  for (int j=0; j<n; j++)
    paint[i][j] = 'O';
}

void color(int x, int y, char c){
  paint[y-1][x-1] = c;
}

void column(int x, int y1, int y2, char c){
  for (int i = y1-1; i<y2; i++)
    paint[i][x-1] = c;
}

void line(int x1, int x2, int y, char c){
  for (int i = x1-1; i<x2; i++)
    paint[y-1][i] = c;
}

void fillRect(int x1, int y1, int x2, int y2, char c){
  for (int i = x1-1; i<x2; i++)
     for (int j = y1-1; j<y2; j++)
       paint[j][i] = c;
}

void fill(int x, int y, char c){
   
}

void save(char name[13]){
  printf("%s\n", name);
  for (int i=0; i<m; i++){
    for (int j=0; j<n; j++){
      printf("%c", paint[i][j]);
    }
    printf("\n"); 
  } 
}

int main(){

  char com='Z';
  char cor;
  int a, b, c, d;
  char name[13];


  do{
   scanf("%c", &com);
   if (com=='X')
     return 0;
  }while (com!='I');

  do{
    switch (com){
      case 'I':
           scanf("%d%d", &n, &m);
      case 'C': clear();
           break;
      case 'L':
           scanf("%d%d%c%c", &a, &b, &cor, &cor); 
           color(a, b, cor);
           break;
      case 'V':
           scanf("%d%d%d%c%c", &a, &b, &c, &cor, &cor); 
           column(a, b, c, cor);
           break;
      case 'H':
           scanf("%d%d%d%c%c", &a, &b, &c, &cor, &cor); 
           line(a, b, c, cor);
           break;
      case 'K':
           scanf("%d%d%d%d%c%c", &a, &b, &c, &d, &cor, &cor); 
           fillRect(a, b, c, d, cor);
           break;
      case 'F':
           scanf("%d%d%c%c", &a,&b, &cor, &cor); 
           fill(a, b, cor);
           break;
      case 'S':
           scanf("%s", &name); 
           save(name);
           break;
    }
    scanf("%c", &com);
  }while (com!='X');
}
