public class Produto {

	public Produto(String nome, float valor) {
		this.nome = nome;
		this.valor = valor;
	}
	
	private String nome;
	private float valor;
	
	
	public String getNome() {
		return this.nome;
	}
	
	public float getValor() {
		return this.valor;
	}

}
