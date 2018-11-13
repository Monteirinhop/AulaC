/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pontosdrigao;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Pontos {
    int matriz[][] = new int[3][3];
    Scanner scanner = new Scanner(System.in);
    public int escolherPontos(){
        System.out.println("Quantos pontos você quer marcar");
        int x = scanner.nextInt();
        System.out.println("Quantos pontos você quer marcar");
        int y = scanner.nextInt();
    return escolherPontos();
    }
    
    public int mostrarMatriz(){
    for(int i = 0 ; i < matriz.length ; i++){
    for(int j = 0 ; j < matriz.length ; j++){
        System.out.printf("%d", matriz[i][j]);
    }
    }
    return mostrarMatriz();
    }
}
