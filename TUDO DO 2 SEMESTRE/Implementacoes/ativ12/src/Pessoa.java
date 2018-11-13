
public class Pessoa {
	private String nome;
	private Contato contato;

	public Contato getContato() {
		return contato;
	}

	public void setContato(Contato contato) {
		this.contato = contato;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void imprimir(){
		System.out.println("Nome: "+ this.nome+" / Contato Tipo:"+this.contato.getTipo() + " - Contato:"+this.contato.getValor());
	}
	
}
