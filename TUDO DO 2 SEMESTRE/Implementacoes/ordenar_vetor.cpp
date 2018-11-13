#include <stdio.h>

int main(void){
  int i, j, v[10], iMin, aux;
  v[0]=4; v[1]=2; v[2]=1;
  v[3]=42; v[4]=1; v[5]=91;
  v[6]=14; v[7]=6; v[8]=16;
  v[9]=4555;

  for(i=0; i<9; i++){
    iMin = i;
    for(j=i+1; j<10; j++){
      if(v[iMin] > v[j])
        iMin=j;
    }
    aux=v[iMin];
    v[iMin]=v[i];
    v[i]=aux;
  }

  for(i=0; i<10; i++){
    printf("%d ", v[i]);
  }

  return 0;
}
