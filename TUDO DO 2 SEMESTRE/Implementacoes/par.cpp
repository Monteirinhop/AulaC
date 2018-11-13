#include <stdio.h>

int v1[100], v2[100], nPar=0, i, x;

void preencherV1(){
  x=200;
  for(i=0; i<100; i++){
    if (i>50)
      x=98;
    v1[i]=i+x;
  }
}

void preencherV2Pares(){
  for(i=0; i<100; i++){
    if(v1[i]%2==0){
      v2[nPar]=v1[i];
      nPar++;
    }
  }
}

void imprimeVetor(int nVetor){
  if(nVetor==1){
    for(i=0; i<100; i++)
      printf("%d ", v1[i]);
  }else{
    for(i=0; i<nPar; i++)
      printf("%d ", v2[i]);
  }
}

int main(void){
  preencherV1();

  preencherV2Pares();

  imprimeVetor(1);

  printf("\n\n");

  imprimeVetor(2);


  //for(i=0; i<100; i++)
  //  printf("%d ", v1[i]);


  return 0;
}

