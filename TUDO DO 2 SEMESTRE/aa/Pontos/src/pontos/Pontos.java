/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pontos;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Pontos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
         int matriz[][] = new int[5][5];
         while(true){
             System.out.println("Insira ponto i");
             int pontoi = scanner.nextInt();
             System.out.println("Insira ponto j");
             int pontoj = scanner.nextInt();
             System.out.println("Insira o simbol");
             String simbol = scanner.nextLine();
         
         }
    }
    
}
