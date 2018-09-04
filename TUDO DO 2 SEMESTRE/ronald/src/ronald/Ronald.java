/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ronald;

import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class Ronald {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int [][] m = new int [4][4]; 
      int i,j,x1,x2,x3,x4,x5,x6;
      int obter,obter2,obter3,obter4;
      int f = 8;
 
      Scanner valor = new Scanner(System.in);
      Scanner p1 = new Scanner(System.in);
      Scanner p2 = new Scanner(System.in);
      Scanner p3 = new Scanner(System.in);
      Scanner p4 = new Scanner(System.in);
      Scanner p5 = new Scanner(System.in);
      Scanner p6 = new Scanner(System.in);
      
      Scanner mudar = new Scanner(System.in);
      Scanner mudar2 = new Scanner(System.in);
      Scanner mudar3 = new Scanner(System.in);
      Scanner mudar4 = new Scanner(System.in);
      
      for( i = 0 ; i < 4 ;i++)
       {
            for( j = 0 ; j < 4 ;j++)
            {   
               
            }
       }
        System.out.println("sua matriz ficou assim \n");
       
        for( i = 0 ; i < 4 ;i++)
        {
             for( j = 0 ; j < 4 ;j++)
            { 
            System.out.print(m[i][j] + " ");
            }
            System.out.println();
        }   
        
        System.out.println("\n AGORA DIGITE A LINHA E COLUNA QUE QUER MODIFICAR : \n");
        
        x1= p1.nextInt();
        x2 = p2.nextInt();
        x3 = p3.nextInt();
        x4 = p4.nextInt();
        x5 = p5.nextInt();
        x6 = p6.nextInt();
        
        System.out.println("\n");
        for( i = 0 ; i < 4 ;i++)
        {
        
                    for( j = 0 ; j < 4 ;j++)
                {     
                    m[x1][x2] = 1;
                    m[x3][x4] = 1;
                    m[x5][x6]= 1;
                }
                
               
        }
        System.out.println("voce escolheu a linha "+x1+" e coluna "+x2);
        System.out.println("voce escolheu a linha "+x3+" e coluna "+x4+"");
    }
    
}
