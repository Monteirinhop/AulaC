import java.util.Scanner;

public class Retangulo extends Forma {

	int largura;
	int altura;
	Scanner ler = new Scanner(System.in);
	
	@Override
	public void coletarEntrada() {
		System.out.println("Entre com o número que representa largura :");
		largura = ler.nextInt();
		
		System.out.println("Entre com o número que representa altura:");
		altura = ler.nextInt();

	}

	@Override
	public void imprimir() {
		System.out.println("");
		
		for(int i=0; i<altura; i++){
			for(int j=0; j<largura; j++){
				System.out.print("x");
			}
			System.out.println("");
		}

	}

}
