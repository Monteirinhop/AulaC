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
           int matriz[][] = new int[5][5];     
          Scanner scanner = new Scanner(System.in);
          
          
          for(int x = 0 ; x < matriz.length ; x++){
               System.out.println("\n");
          for(int y = 0 ; y < matriz.length ; y++){
          
          System.out.println(matriz[x][y]);
          
          }
                   
          }
          
          System.out.println("marque um ponto xy" + "\n");
          Scanner x1 = new Scanner(System.in);
          int p1 = x1.nextInt();
          Scanner y1 = new Scanner(System.in);
          int p2 = y1.nextInt();
          
         for(int x = 0 ; x < matriz.length ; x++){
                
               
          for(int y = 0 ; y < matriz.length ; y++){
           
          System.out.println();
          
          }
                   
          }
          
    }
    
}
