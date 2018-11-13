#include <stdio.h>
#include <time.h>
#define tam 10
void GeraNumeros(){
int v[tam];
srand(100);
for(int i=0 ; i < tam ; i++){

printf("%i \t",rand()%100);
}

}
void GeraVetor(){
int v[tam],flag = 0;
for (int i = 0;i<tam ;i++ ){
    if(v[tam]%2==0){
        flag += 1;

    }

}
printf("Seu vetor tem %i numeros pares",flag);
}
void GeraVetorPar(){
int v[tam],v2[tam],x=0;
for (int i = 0 ;i<tam ;i++) {
    if (v[tam]%2==0){
        v2[x] = v[tam] ;
       printf("%i \t",v2[x]);
       x++;

    }



}


}
void main(){

GeraNumeros();
printf("\n\n");
GeraVetor();
printf("\n\n");
GeraVetorPar();
}
