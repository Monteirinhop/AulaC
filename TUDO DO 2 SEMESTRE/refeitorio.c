#include <stdio.h>

void main(){

int numpessoas,entrada,saida;

printf("Digite quantas pessoas o refeitório suporta");
scanf("%d",&numpessoas);

for (int i = 0;i<numpessoas ;i++){
    printf("Digite quantas pessoas entraram");
    scanf("%d",&entrada);
    if (entrada>numpessoas)
    {
            printf("entrando mais pessoas do que a quantidade permitida \n");
            printf("Digite quantas pessoas entraram\n");
            scanf("%d",&entrada);

    }
        printf("Digite quantas pessoas sairam");
                scanf("%d",&saida);
                if (saida>entrada){
                    printf("Não se pode sair mais do que foi entrado\n");
                    printf("Digite quantas pessoas sairam \n");
                    scanf("%d",&saida);
    }
    numpessoas = numpessoas - (entrada - saida);
    printf("O Refeitório ainda suporta %d pessoas ", numpessoas);
    printf("\n");

}


}
