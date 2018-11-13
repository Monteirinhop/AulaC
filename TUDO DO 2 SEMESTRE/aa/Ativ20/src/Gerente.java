
public class Gerente extends Funcionario {

	
	float calcularPag() {
		return salario;
	}
public Gerente(int idGerente,String nomeGerente,float salarioGerente) {
	id = idGerente;
	nome = nomeGerente;
	salario = salarioGerente;
}
}
