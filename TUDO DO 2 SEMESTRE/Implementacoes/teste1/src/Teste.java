
public class Teste {

	public static void main(String[] args) {
		
		Numero num = new Numero();
		num.somar(30);
		num.subtrair(3);

		Numero num2 = new Numero();
		num2.somar(345);
		num2.subtrair(7);		
		
		System.out.println("Numero: "+ num.getNumero());
		System.out.println("Numero: "+ num2.getNumero());
		
	}

}
