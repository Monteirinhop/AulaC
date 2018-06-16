#include <stdio.h>

void main(){
int num[5],i;
printf("Insira 5 Valores:\n");
for(i=1; i<=5; i++){

printf("a[%d]: ",i);
scanf("%d",&num[i]);
}
printf("A Ordem inversa eh:\n");
for(i=5; i>=1; i--){

printf("a[%d]: %d\n",i,num[i]);
}

printf("A Ordem Normal eh:\n");

for(i=1; i<=5; i++){
printf("a[%d]e: %d\n",i,num[i]);
}

}

