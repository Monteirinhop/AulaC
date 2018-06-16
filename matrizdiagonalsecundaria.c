# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

void main(){
	int i, j, m[3][3], aSoma=0, bSoma=0, cSoma=0, dSoma=0, eSoma=0, fSoma=0;

	/* carregando dados automaticamente para teste
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			//teste
			m[i][j]=j+1;
		}
	}
	*/

	// solicita a entrada dos dados

	for(i=0; i < 2; i++){
		for (j=0; j < 2; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}


	for(i=0; i < 2; i++){
		for (j=0; j < 2; j++){
			// a. Soma dos elementos da diagonal principal;
			if(i==j){
				aSoma = aSoma + m[i][j];
			}

			// b. Soma dos elementos da diagonal secundária;
			if (j==2-i-1) {
				bSoma = bSoma + m[i][j];
			}

			// c. Soma dos elementos acima da diagonal principal;
			if (j>i) {
				cSoma = cSoma + m[i][j];
			}

			// d. Soma dos elementos abaixo da diagonal principal;
			if (j<i) {
				dSoma = dSoma + m[i][j];
			}

			// e. Soma dos elementos acima da diagonal secundária;
			if (j<=2-i-2) {
				eSoma = eSoma + m[i][j];
			}

			// f. Soma dos elementos abaixo da diagonal secundária;
			if (j>=2-i) {
				fSoma = fSoma + m[i][j];
			}

		}
	}

	printf("\n\n  Matriz \n\n");
	for(i=0; i < 2; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < 2; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t Soma dos elementos da diagonal principal : %i\n", aSoma);
	printf("\t Soma dos elementos da diagonal secundaria: %i\n", bSoma);
	printf("\t Soma dos elementos acima da diagonal principal %i\n", cSoma);
	printf("\t Soma dos elementos abaixo da diagonal principal: %i\n", dSoma);
	printf("\t Soma dos elementos acima da diagonal secundária: %i\n", eSoma);
	printf("\t Soma dos elementos abaixo da diagonal secundária: %i\n", fSoma);

	return 0;
}
