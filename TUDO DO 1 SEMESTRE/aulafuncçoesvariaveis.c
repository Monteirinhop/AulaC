#include <stdio.h>


void main (){
int v1[3],v2[3],v3[3];
lervetor(&v1);
lervetor(&v2);
somavetor(&v3,&v1,&v2);
mostravetor(v3);
return 0;
}
int lervetor(int v[3]){
    int x ;
    for (x=0;x<3;x++){
        scanf("%i",&v[x]);
    }
}
int somavetor(int v[3],int v1[3],int v2[3]){
    int x;
for(x = 0; x<3 ; x++ ){
v[x] = v1[x]+v2[x];
}
}

int mostravetor(int v[3]){
int x;
for (x=0;x<3 ;x++ ){
printf("%i",v[x]);
}

}
