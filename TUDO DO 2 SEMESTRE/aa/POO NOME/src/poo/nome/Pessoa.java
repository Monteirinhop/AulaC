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
public class Pessoa {
      private String Nome;
     private String Sobrenome;
     private String UltimoNome;
    
     public Pessoa(String primeiro, String meio, String ultimo) {
      Nome = primeiro;
      Sobrenome = meio;
      UltimoNome = ultimo;
    }

 
    
    public String getNomeCompleto(){
    String NomeCompleto = Nome + " " + Sobrenome + " " + UltimoNome;
    return NomeCompleto;
    }
}
