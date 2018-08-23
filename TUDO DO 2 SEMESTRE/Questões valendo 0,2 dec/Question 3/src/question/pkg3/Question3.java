/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question.pkg3;

import java.util.Scanner;

public class Question3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("///////////////////////////// FORMINHAS GEOMÉTRICAS /////////////////////////////");
        Scanner scanner = new Scanner(System.in);
        System.out.println("///////////////////////////// INSIRA SE VOCÊ QUER quadrado, triangulo ou retangulo /////////////////////////////");
        String test = scanner.nextLine();
        
        switch(test){
            case "quadrado":
            System.out.println(" --- ");
            System.out.println("|   |");
            System.out.println(" --- \n");
            break;
            case "triangulo":
            System.out.println("     .."); 
            System.out.println("    .  .");
            System.out.println("   .    .");
            System.out.println(" .       .");
            System.out.println(".__________.");
            break;
            case "retangulo":
            System.out.println(".............");
            System.out.println("|...........|");
            System.out.println("|...........|");
            System.out.println("|...........|");
            System.out.println("|...........|");
            break;
            default:
                System.out.println("Você inseriu algo invalido ai fera");
        }
    }
    
}
