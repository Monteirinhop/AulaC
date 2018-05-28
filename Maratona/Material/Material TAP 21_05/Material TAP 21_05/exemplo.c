#include <stdio.h>
#include <conio.h>

struct no 
{
       float info;
       struct no* prox;
};
typedef struct no No;

struct fila
{
       No* ini;
       No* fim;     
};
typedef struct fila Fila;

Fila* cria()
{
      Fila* f = (Fila*) malloc(sizeof(Fila));
      f->ini = f->fim = NULL;
      return f;
}

No* insere_no_fim (No* fim, float v)
{
    No* p = (No*) malloc (sizeof(No));
    p->info = v;
    p->prox = NULL;
    if (fim != NULL)
       fim->prox = p;
    return p;
}

void insere (Fila* f, float v)
{
     f->fim = insere_no_fim (f->fim, v);
     if (f->ini == NULL)
        f->ini = f->fim; // apenas um elemento    
}

No* busca(Fila* f, float v)
{
    No* p;
    No* anterior=NULL;
    for (p=f->ini; p != f->fim; p=p->prox)
    {
         if (p->info == v)
            return anterior;
         anterior = p;
    }
    return NULL;
} 

void retira (Fila* f, float v)
{
       No* anterior = busca(f, v);
       No* auxiliar;
       if (anterior == NULL)
          printf("No nao encontrado\n");
       else
       {
           auxiliar = anterior->prox;
           anterior->prox = auxiliar->prox;
       }      
       free(auxiliar);
}

void imprime(Fila* f)
{
     No* q;
     for (q=f->ini; q != NULL; q=q->prox)
         printf("%f\t", q->info);     
}

void libera(No* l)
{
     No* p = l;
     while (p != NULL)
     {
           No* proximo = p->prox;
           free(p);
           p = proximo;
     }
}

int main()
{
    Fila* f = cria();
    insere(f, 10.0);
    insere(f, 10.8);
    insere(f, 21.0);
    insere(f, 35.5);
    printf("\nFila\n");
    imprime(f);
    retira(f, 10.8);
    printf("\n\nFila\n");
    imprime(f);
    libera(f->ini);
    getch();
    return 0;   
}
