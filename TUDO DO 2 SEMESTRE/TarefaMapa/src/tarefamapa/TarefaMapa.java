/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarefamapa;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class TarefaMapa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int matriz[][] = new int[2][2];     
          Scanner scanner = new Scanner(System.in);
          
          
          for( int i = 0 ;i < matriz.length ; i++ ){
          for( int j = 0 ; j < matriz.length ; j++){
            System.out.println("insira valor pro vet");
            int value = scanner.nextInt();      
          }          
          }
          for( int i = 0 ;i < matriz.length ; i++ ){
          for( int j = 0 ; j < matriz.length ; j++){
          System.out.println(matriz[i][j]);
          }          
          }
          
    }
    
}
