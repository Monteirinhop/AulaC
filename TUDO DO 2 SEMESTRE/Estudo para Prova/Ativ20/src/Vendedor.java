
public class Vendedor extends Funcionario {
	
	public float valorVendas;
	
	@Override
	float calcularPag() {
		// TODO Auto-generated method stub
		return (float) (valorVendas * 0.1 + salario);
	}

}
