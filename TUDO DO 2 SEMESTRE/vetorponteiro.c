#include <stdio.h>

void main(){
int v[100],*x;

for (int i = 0;i<100 ;i++ ){
    v[i] = 0;

}
for (int i = 0;i<100 ;i++ ){
    x = &i;

    v[i] = *x;

}

for (int i = 0;i<100 ;i++ ){
    printf("%d  \t",v[i]);

}

}
