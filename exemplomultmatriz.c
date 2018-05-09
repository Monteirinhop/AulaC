#include <stdio.h>

main() {

  int i1, j1, i2, j2, i, j, k, m1[2][2], m2[2][2], m3[2][2];
    printf("\nValores da Matriz 1\n=====================\n\n");
    for (i=0; i<1; i++) {
      for(j=0; j<1; j++) {
        printf("Digite um valor para [%d][%d].: ", i, j);
        scanf("%d", &m1[i][j]);

      }

    }

    printf("\nValores da Matriz 2\n=====================\n\n");
    for (i=0; i<1; i++) {
      for (j=0; j<j2; j++) {
        printf("Digite um valor para [%d][%d].: ", (i+1), (j+1));
        scanf("%d", &m2[i][j]);

      }

    }

    for (i=0;i<i1; i++) {
      for (j=0; j<i1; j++) {
        for (k=0; k<j1; k++) {
          m3[i][j] += (m1[i][k] * m2[k][j]);

        }

      }

    }

    printf("\nMatriz 3\n=====================\n\n");

    for (i=0; i<i1; i++) {
      for (j=0; j<j2; j++) {
        printf("%d ", m3[i][j]);

      }

      printf("\n");

    }

    printf("\n");

  }

  else {
      printf("\nErro! Impossivel multiplicar as matrizes informadas.\n");

    }

  return(0);

}
