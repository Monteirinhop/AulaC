/* @JUDGE_ID: lcarlos 10189 C++ */

#include <stdio.h>

int main(){

int count = 1;
       
  while (true){
      int lin, col;

      scanf("%d%d", &lin, &col);
  
      if (col == 0 && lin == 0)
        break;

      if (count!=1)
         printf("\n");

      char cm[lin+1][col+1];
      int  cmi[lin+1][col+1];
        
      for (int i=0;i<lin;i++){
             scanf("%s", &cm[i]); 
      }

      for (int i=0;i<lin;i++)
         for (int j=0; j<col;j++)
             cmi[i][j] = 0;	
            
      for (int i=0;i<lin;i++){
         for (int j=0; j<col;j++){
            if (cm[i][j]=='*'){
                for (int k = i-1; k<=i+1; k++){
                    if (k>=0 && k<=lin)
                        for (int l = j-1; l<=j+1; l++){
                           if (l>=0 && l<col){
                               cmi[k][l]++;
                           }
                        }            
                }
            }
         }
      }

      printf("Field #%d:\n", count++);
      for (int i=0;i<lin;i++){
         for (int j=0; j<col;j++){
            if (cm[i][j]=='*')
               printf("%c", cm[i][j]);
            else printf("%d", cmi[i][j]);
         }
         printf("\n");
      }
      	
  }
  return 0;
}
