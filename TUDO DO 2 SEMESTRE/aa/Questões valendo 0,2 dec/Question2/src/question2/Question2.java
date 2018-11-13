/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question2;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Question2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("///////////////////////////// AGENDINHA /////////////////////////////");
        
        
        System.out.println("///////////////////////////// INSIRA O NOME /////////////////////////////");
        String nome = scanner.nextLine();
        System.out.println("///////////////////////////// INSIRA O ENDEREÇO /////////////////////////////");
        String endereço = scanner.nextLine();
        System.out.println("///////////////////////////// INSIRA O Telefone /////////////////////////////");
        String telefone = scanner.nextLine();
        System.out.println("///////////////////////////// INSIRA O EMAIL /////////////////////////////");
        String email = scanner.nextLine();
        System.out.println("///////////////////////////// O NOME SALVO FOI : "+nome+ " /////////////////////////////");
        System.out.println("///////////////////////////// O ENDEREÇO SALVO FOI : "+endereço+ " /////////////////////////////");
        System.out.println("///////////////////////////// O TELEFONE SALVO FOI : "+telefone+ " /////////////////////////////");
        System.out.println("///////////////////////////// O EMAIL SALVO FOI : "+email+ " /////////////////////////////");
        }
    }
    

