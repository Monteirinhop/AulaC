
public class Vendedor extends Funcionario {

	@Override
	float calcularPag() {
		return 0;
		
		// TODO Auto-generated method stub

	}
	public Vendedor(int idVendedor,String nomeVendedor,float salarioVendedor) {
		this.id = idVendedor;
		this.nome = nomeVendedor;
		this.salario = salarioVendedor;
		// TODO Auto-generated constructor stub
	}
	

}
