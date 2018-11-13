import java.util.Scanner;

public class Triangulo extends Forma {
	
	Scanner ler = new Scanner(System.in);
	int altura;
	
	@Override
	public void coletarEntrada() {
		System.out.println("Entre com o número que representa altura:");
		altura = ler.nextInt();
	}

	@Override
	public void imprimir() {
		System.out.println("");
		
		for(int i=0; i<altura; i++){
			for(int j=0; j<i; j++){
				System.out.print("x");
			}
			System.out.println("");
		}
	}

}
