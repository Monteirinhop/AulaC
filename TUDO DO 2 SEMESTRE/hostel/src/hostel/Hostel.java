/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hostel;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Hostel {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int qtsduaspessoa,qtsquatropesosas,resposta,total;
        
        Scanner ler = new Scanner(System.in);
        
        System.out.println("Digite quantos quartos se tem de 2 pessoas");
        qtsduaspessoa = ler.nextInt();
        System.out.println("Digite quantos quartos se tem de 4 pessoas");
        qtsquatropesosas = ler.nextInt();
        total = qtsduaspessoa + qtsquatropesosas;
        for(int i = 0 ; i<total ; i++){
        System.out.println("Você irá para o quarto de 2 ou 4 pessoas ?");
        resposta = ler.nextInt();
            if (resposta == 2) {
                qtsduaspessoa += qtsduaspessoa - 1;
                total += qtsduaspessoa = qtsduaspessoa - 1;
            }
            if(resposta == 4){
             qtsquatropesosas += qtsquatropesosas - 1;
             total += qtsquatropesosas = qtsquatropesosas - 1;
            }
            System.out.println("ainda se tem" + qtsduaspessoa + " quartos para duas pessoas ");
            System.out.println("ainda se tem "+ qtsquatropesosas + " quartos para quatro pessoas");
            
        }
    }
    
}
