#include <stdio.h>
#include <stdlib.h>

int main(){
  int n=-1, ci, vi, soma=0;

  while (n!=0){
    scanf("%d", &n);
    if (n==0)
      return 0;
    
    for (int i=0; i<n; i++){
	scanf("%d%d", &ci, &vi);
        soma+= vi-vi%2;
    }
    printf("%d\n", (int)soma/4);
    soma=0;
  }


  return 0;
}
