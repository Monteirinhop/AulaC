#include <stdio.h>
#include <math.h>

void main(){
float raiz,exp1,exp2,x1,x2,y1,y2;
x1=6;
x2=2;
y1=9;
y2=3;
exp1=pow(x1-x2,2);
exp2=pow(y1-y2,2);
raiz= sqrt(exp1+exp2);
printf("Valor de exp1 : %f \n", exp1);
printf("Valor de exp1 : %f \n", exp2);
printf("A Raiz eh : \n %f",raiz);

}
