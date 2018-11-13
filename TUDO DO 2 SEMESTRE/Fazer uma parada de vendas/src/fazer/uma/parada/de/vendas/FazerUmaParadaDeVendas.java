/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fazer.uma.parada.de.vendas;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Gustavo Monteiro
 */
public class FazerUmaParadaDeVendas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        List<Funcionario> funcionarios = new ArrayList<Funcionario>();
    Scanner ler = new Scanner(System.in);
    while(true){
        System.out.println("Entre com as opções:");
        System.out.println("Digita 1 para entrar com novo funcionario");
        System.out.println("Digita 2 para entrar com pagamento mensal");
        int opcao = ler.nextInt();
        
            if(opcao == 1){
                System.out.println("Insira o seu nome");
                String nomeFuncionario = ler.next();
                System.out.println("Insira o Seu Salário");
                float salarioFuncionario = ler.nextFloat();
                System.out.println("Você é gerente ou Vendedor ?");
                System.out.println("Vendedor digita 1");
                System.out.println("Gerente digita 2");
                int tipo = ler.nextInt();
                if (tipo == 1) {
                    Vendedor vendedor = new Vendedor();
                    vendedor.nome = nomeFuncionario;
                    vendedor.salario = salarioFuncionario;
                    System.out.println("Entre com o Valor das vendas que você fez");
                    float valorVendas = ler.nextFloat();
                    vendedor.valorVendas = valorVendas;
                    funcionarios.add(vendedor);
                }
                if (tipo == 2) {
                    Gerente gerente = new Gerente();
                    gerente.nome = nomeFuncionario;
                    gerente.salario = salarioFuncionario;
                    funcionarios.add(gerente);
                }}
                
            if(opcao==2){
                for (Funcionario funcionario : funcionarios) {
                    System.out.println("Nome: "+funcionario.nome + " Valor pra receber : " + funcionario.calcularPag());
                }}
                
        }
        
        
    }
    
}
