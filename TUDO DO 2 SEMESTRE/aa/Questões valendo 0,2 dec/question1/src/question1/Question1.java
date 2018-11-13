/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question1;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Question1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int chance = 4 ;
        int randon = (int)(1+Math.random()*14);
        int randon1 = (int)(1+Math.random()*14);
        Scanner scanner = new Scanner(System.in);
        System.out.println("///////////////////////////// JOGO DA ADVINHAÇÃO /////////////////////////////");
        System.out.println("///////////////////////////// TENTE ACERTAR O NÚMERO /////////////////////////////");
        System.out.println(randon + "   " + randon1);
        for(int i = 0 ; i < chance ; i++){
            System.out.println("///////////////////////////// INSIRA UM NÚMERO FIOTE /////////////////////////////");
            int nr = scanner.nextInt();
            if(nr == randon){
                System.out.println( "///////////////////////////// ACERTOU O 1 NÚMERO ERA "+ randon + " /////////////////////////////");
                
                }
                if(nr == randon1){
                System.out.println( "///////////////////////////// ACERTOU O 2 NÚMERO ERA "+ randon1 + " /////////////////////////////");
                return;
                }
                if(nr != randon && nr!= randon1){
                System.out.println( "///////////////////////////// TENTE NOVAMENTE VOCÊ TEM MAIS " + (chance - (i+1)) + "chances" + " /////////////////////////////");
                }
            
        }
    
        
        
    }
    
}
