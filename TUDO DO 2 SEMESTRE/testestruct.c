#include <stdio.h>
typedef struct pessoa pessoa;

struct pessoa{
char nome[100];
int idade;
pessoa *pai,*neto;
};
int main(){
pessoa filho,pai,neto;
pessoa *p = &filho;
pessoa *n = &filho;
telefone a,b,c;

strcpy(filho.nome,"Filho da silva");
filho.idade = 10;



strcpy(pai.nome,"Pai da silva");
pai.idade = 45;
filho.pai = &pai;

strcpy(neto.nome,"Neto da silva");
neto.idade = 45;
filho.neto = &neto;

printf("%s, %d \n", filho.pai->nome, filho.pai->idade);
printf("%s, %d \n", p->pai->nome,p->pai->idade);
printf("%s, %d \n",filho.nome,filho.idade);
printf("%s, %d \n", filho.neto->nome, filho.neto->idade);
printf("%s, %d \n", n->neto->nome,n->neto->idade);

}
