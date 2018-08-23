/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciorodrigo;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class ExercicioRodrigo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Pessoa gustavo = new Pessoa("Gustavo", "Dias", "Monteiro");

        //PARTE DOS SCANNERS
        Scanner scanner = new Scanner(System.in);
         System.out.println("Digite a Quantidade de pessoas que você quer cadastrar");
         int valor = scanner.nextInt();
         
         System.out.println("Começo de cadastro, você escolheu " + valor + " Pessoas para serem cadastradas");
         for(int i = 0 ; i<=valor ;i++){
         public String nome = scanner.nextLine();
         System.out.println("Digite o Nome da Pessoa que você quer cadastrar");
         
         
         
         
         }
         Pessoa a = new Pessoa(nome,nome,nome);
         System.out.println();
    }
    
}
