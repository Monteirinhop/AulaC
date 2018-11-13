/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fazer.uma.parada.de.vendas;

/**
 *
 * @author Gustavo Monteiro
 */
public abstract class Funcionario {
	
	public String nome;
	public float salario;
	
	abstract float calcularPag();
}
