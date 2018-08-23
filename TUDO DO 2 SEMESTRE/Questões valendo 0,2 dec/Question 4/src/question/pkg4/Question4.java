/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question.pkg4;

/**
 *
 * @author Gustavo Monteiro
 */
public class Question4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        cripto teste = new cripto("Gustavo");
        System.out.println("Texto antes da codificação: " + teste.getCriptoFull());
        System.out.println("Texto depois da codificação: " + teste.getCripto1Full());
       
        
        
    }
    
}
