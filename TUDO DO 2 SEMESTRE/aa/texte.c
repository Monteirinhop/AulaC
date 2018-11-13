#include <stdio.h>

main()
{
int n,res;

printf ("digite um numero: "); //numero a ser digitado
scanf ("%d",&n);
res= (n+1) % 61;//variavel resultado que armazena o sucessor
printf ("o numero sucessor de %d eh: %d",n,res);
}
