#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long double resp;
long t, a, b;

int main(){

  while (true){
    scanf("%ld%ld%ld", &t, &a, &b);

    if (t==0 && a==0 && b==0)
      return 0;

    resp = (powl(t,a)-1)/(powl(t,b)-1);

    printf("(%ld^%ld-1)/(%ld^%ld-1) %.0llf\n", t, a, t, b, resp);
  }
}