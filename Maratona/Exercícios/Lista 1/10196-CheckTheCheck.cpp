#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

  using std::cout;
  using std::cin;  

  char tabuleiro[8][8];

bool cavaloAtaca(int i, int j, char cavAdv){
//porção superior
    if (i-2>=0){
       if (j-2>=0){                
         if (tabuleiro[i-1][j-2]==cavAdv ||
             tabuleiro[i-2][j-1]==cavAdv){
             return true;
         }         
       }
       else{
           if (j-1>=0){                
             if (tabuleiro[i-2][j-1]==cavAdv){
                 return true;
             }         
           }                        
       }

       if (j+2<=7){                
         if (tabuleiro[i-1][j+2]==cavAdv ||
             tabuleiro[i-2][j+1]==cavAdv){
             return true;
         }         
       }
       else{
           if (j+1<=7){                
             if (tabuleiro[i-2][j+1]==cavAdv){
                 return true;
             }         
           }
       }                        
    }
    else{
        if (i-1>=0){
           if (j-2>=0){                
             if (tabuleiro[i-1][j-2]==cavAdv){
                 return true;
             }         
           }
    
           if (j+2<=7){                
             if (tabuleiro[i-1][j+2]==cavAdv){
                 return true;
             }         
           }                      
        }
    }


//porção inferior
    if (i+2<=7){
       if (j-2>=0){                
         if (tabuleiro[i+1][j-2]==cavAdv ||
             tabuleiro[i+2][j-1]==cavAdv){
             return true;
         }         
       }
       else{
           if (j-1>=0){                
             if (tabuleiro[i+2][j-1]==cavAdv){
                 return true;
             }         
           }                        
       }

       if (j+2<=7){                
         if (tabuleiro[i+1][j+2]==cavAdv ||
             tabuleiro[i+2][j+1]==cavAdv){
             return true;
         }         
       }
       else{
           if (j+1<=7){                
             if (tabuleiro[i+2][j+1]==cavAdv){
                 return true;
             }         
           }
       }                        
    }
    else{
        if (i+1<=6){
           if (j-2>=0){                
             if (tabuleiro[i+1][j-2]==cavAdv){
                 return true;
             }         
           }
    
           if (j+2<=7){                
             if (tabuleiro[i+1][j+2]==cavAdv){
                 return true;
             }         
           }                      
        }
    }


  return false;
}


bool atacaReto(char peca){
  if (peca == 'r' || peca == 'R' ||
      peca == 'q' || peca == 'Q')
      return true;

  return false;
}

bool atacaDiag(char peca){
  if (peca == 'b' || peca == 'B' ||
      peca == 'q' || peca == 'Q')
      return true;

  return false;
}

bool atacaLinha(int i, int j, char rei){
  bool brancas = isupper(rei);
  
  for (int k = j-1; k>=0; k--){
      if (tabuleiro[i][k]!='.'){
         if (brancas){
           if (isupper(tabuleiro[i][k])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[i][k]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[i][k])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[i][k]))
                return true;
             else break;
           }            
         }
      }
  }

  for (int k = j+1; k<8; k++){
      if (tabuleiro[i][k]!='.'){
         if (brancas){
           if (isupper(tabuleiro[i][k])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[i][k]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[i][k])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[i][k]))
                return true;
             else break;
           }            
         }
      }
  }

  return false;     
}


bool atacaColuna(int i, int j, char rei){
  bool brancas = isupper(rei);
  
  for (int k = i-1; k>=0; k--){
      if (tabuleiro[k][j]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][j])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[k][j]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][j])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[k][j]))
                return true;
             else break;
           }            
         }
      }
  }

  for (int k = i+1; k<8; k++){
      if (tabuleiro[k][j]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][j])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[k][j]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][j])){
              break;
           }
           else {
             if (atacaReto(tabuleiro[k][j]))
                return true;
             else break;
           }            
         }
      }
  }
  return false;     
}    


bool atacaDiagonalDesc(int i, int j, char rei) {
  bool brancas = isupper(rei);
  
  int k, w;
  
  k=i-1;
  w=j-1;
  while (k>=0 && w>=0){
      if (tabuleiro[k][w]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
      }  
                 
     k--;
     w--;   
  }
     

  k=i+1;
  w=j+1;
  while (k<=7 && w<=7){
      if (tabuleiro[k][w]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
      }  
                 
     k++;
     w++;   
  }
  return false;  
}

bool atacaDiagonalAsc(int i, int j, char rei) {
  bool brancas = isupper(rei);
  
  int k, w;
  
  k=i+1;
  w=j-1;
  while (k<=7 && w>=0){
      if (tabuleiro[k][w]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
      }  
                 
     k++;
     w--;   
  }
     

  k=i-1;
  w=j+1;
  while (k>=0 && w<=7){
      if (tabuleiro[k][w]!='.'){
         if (brancas){
           if (isupper(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
         else{
           if (islower(tabuleiro[k][w])){
              break;
           }
           else {
             if (atacaDiag(tabuleiro[k][w]))
                return true;
             else break;
           }            
         }
      }  
                 
     k--;
     w++;   
  }
  
  return false;
}

bool peaoAtaca(int i, int j, char rei){
   if (isupper(rei)){
       if (tabuleiro[i-1][j-1]=='p' ||
           tabuleiro[i-1][j+1]=='p')
           return true;
   }
   else{
       if (tabuleiro[i+1][j-1]=='P' ||
           tabuleiro[i+1][j+1]=='P')
           return true;        
   }

   return false;     
}     


int main(){


      int wkj, wki, bkj, bki;

      for (int i=0; i<8; i++)
         cin >> tabuleiro[i];
         
      for (int i=0; i<8; i++){
         for (int j=0; j<8; j++){
            if (tabuleiro[i][j]=='k'){
               bki = i;
               bkj = j;
            }
            else
            if (tabuleiro[i][j]=='K'){
               wki = i;
               wkj = j;
            }             
         }
      }
      
      if (peaoAtaca(wki, wkj, 'K')   ||
          cavaloAtaca(wki, wkj, 'n') ||
          atacaLinha(wki, wkj, 'K') ||
          atacaColuna(wki, wkj, 'K') ||
          atacaDiagonalAsc(wki, wkj, 'K') ||
          atacaDiagonalDesc(wki, wkj, 'K'))
          cout << "Game #1: white king is in check.";
      else{
          if (peaoAtaca(bki, bkj, 'k')   ||
              cavaloAtaca(bki, bkj, 'N') ||
              atacaLinha(bki, bkj, 'k') ||
              atacaColuna(bki, bkj, 'k') ||
              atacaDiagonalAsc(bki, bkj, 'k') ||
              atacaDiagonalDesc(bki, bkj, 'k'))
              cout << "Game #1: black king is in check.";
          else cout << "Game #1: no king is in check.";
      }
          
  system("PAUSE");
  return EXIT_SUCCESS;
}

/*
      printf("%c", '\n');
      
      
      
      
      
                  
      for (int i=0; i<8; i++){
         for (int j=0; j<8; j++){
           cout<<tabuleiro[i][j];
         }
         cout<<'\n';
      }
*/
