/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question.pkg4;

import java.util.Base64;

/**
 *
 * @author Gustavo Monteiro
 */
public class cripto {
    private String Nome;
     
    
     public cripto(String primeiro) {
      Nome = primeiro;
    }
     
        
 
    public String getCripto1Full(){
    String codificado = Base64.getEncoder().encodeToString(Nome.getBytes());
    return codificado;
    }
    
    
    public String getCriptoFull(){
    String cripto = Nome;
    return cripto;
    
    }
}
