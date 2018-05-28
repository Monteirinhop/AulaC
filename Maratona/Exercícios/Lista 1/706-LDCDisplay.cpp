#include <iostream>
#include <stdlib.h>
#include <stdio.h>

  using std::cout;
  using std::cin;  

int main(){


//  while (true){
      char entrada[11];
      char numeric[10][14]=
      //                0    1    2    3    4    5    6    7    8    9   10   11   12   13     
                      {' ', '-', ' ', '|', ' ', '|', ' ', ' ', ' ', '|', ' ', '|', ' ', '-',
                       ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ',
                       ' ', '-', ' ', ' ', ' ', '|', ' ', '-', ' ', '|', ' ', ' ', ' ', '-',
                       ' ', '-', ' ', ' ', ' ', '|', ' ', '-', ' ', ' ', ' ', '|', ' ', '-',
                       ' ', ' ', ' ', '|', ' ', '|', ' ', '-', ' ', ' ', ' ', '|', ' ', ' ',
                       ' ', '-', ' ', '|', ' ', ' ', ' ', '-', ' ', ' ', ' ', '|', ' ', '-',
                       ' ', '-', ' ', '|', ' ', ' ', ' ', '-', ' ', '|', ' ', '|', ' ', '-',
                       ' ', '-', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ',
                       ' ', '-', ' ', '|', ' ', '|', ' ', '-', ' ', '|', ' ', '|', ' ', '-',                       
                       ' ', '-', ' ', '|', ' ', '|', ' ', '-', ' ', ' ', ' ', '|', ' ', '-'};

      scanf("%[ 0-9]", entrada);
      printf("%s", "\n\n\n\n"); 

      if (entrada=="0 0")
         return 0;
         
      int size = atoi(entrada);
      
      char *t = strstr(entrada, " ");
      t++;
      char *r = t;
      
      char digito[2];

      for (int i=0;i<14;i+=3){
          while (*t!='\0'){
             digito[0] = *t++;
             int n = atoi(digito);

             for (int j=i; j<i+3; j++){
                    printf("%c", numeric[n][j]);
             }
             printf("%c", ' ');
          }
          printf("%c", '\n');
          t=r;
      }
      
      
//  }


//         for (int k=0; k<14; k++){
//            printf("%c", numeric[n][k]);
//            
//            if (k==2 || k==5 || k==8 || k==11 || k==14)
//               printf("%c", '\n');
//         }


  printf("%s", "\n\n\n\n"); 
  system("PAUSE");
  return EXIT_SUCCESS;
}
