/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poo.nome;
/**
 *
 * @author Gustavo Monteiro
 */
public class POONOME {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Pessoa Gustavo = new Pessoa("Gustavo", "Dias", "Monteiro");
       Pessoa Jackao = new Pessoa("Jackão", "Junior", "De Alguma Coisa");
       Pessoa Maria = new Pessoa("Maria","De Fátima","Dias De Jesus");
      
       
        System.out.println("Nome de Gustavo:\t" + Gustavo.getNomeCompleto()+"\n"+"Nome de Maria:\t" + Maria.getNomeCompleto()+"\n"+"Nome de Jackão\t" + Jackao.getNomeCompleto());
        
       
    }
    
}
