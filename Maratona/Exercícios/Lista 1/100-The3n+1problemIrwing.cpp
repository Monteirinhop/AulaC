#include <stdio.h>
#include <iostream>


int main(){
    char in[15];
    scanf("%[ 0-9]",in);
    int i = atoi(in);
    char *n=strstr(in," ");n++;
    int j = atoi(n); 
    int num = i;
    int count=0;
    int maxcyc=0;
    if (i>j){
        for(;num>j;num--){
           int numcyc=num;
           for (;numcyc>1;count++){           
                if(!(numcyc%2==0)){
                    numcyc= 3*numcyc+1;   
                }
                else{
                    numcyc= numcyc/2;
                }
                if(numcyc==1){
                    count++;
                }
                }
          if(maxcyc<count){
                    maxcyc=count;                
                }
          count=0;
        }
    }
    else{  
         for(;num<=j;num++){
         int numcyc=num;
           for (;numcyc>1;count++){           
                if(!(numcyc%2==0)){
                    numcyc= 3*numcyc+1;   
                }
                else{
                    numcyc= numcyc/2;
                }
                if(numcyc==1){
                    count++;
                }
                 }
          if(maxcyc<count){
                    maxcyc=count;                
                }
          count=0;
        }
    }
    printf("%d %d %d\n",i,j,maxcyc);
    system("PAUSE");
}

