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

public class Vendedor extends Funcionario {
	
	public float valorVendas;
	
	@Override
	float calcularPag() {
		// TODO Auto-generated method stub
		return (float) (valorVendas * 0.1 + salario);
	}

}

