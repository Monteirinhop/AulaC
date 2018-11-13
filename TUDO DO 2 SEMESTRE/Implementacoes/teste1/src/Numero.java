
public class Numero {
	
	private Integer valor;
	
	public Numero() {
		valor = 0;
	}
	
	public void somar(int x){
		valor = valor + x;
	}
	
	public void subtrair(int x){
		valor = valor - x;
	}
	
	public int getNumero(){
		return valor;
	}
	
}
