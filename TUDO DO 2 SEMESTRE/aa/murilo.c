#include <stdio.h>

int main(){
float temp1 ;

printf("Digite sua temperatura");
scanf("%f",&temp1);
if (temp1 > 30){
    printf("Est� muito quente");

}

if (temp1 < 30 && temp1> 0){
    printf("Temperatura Ambiente");
}
    if (temp1 < 0){
        printf("Est� gelado");
    }


}
