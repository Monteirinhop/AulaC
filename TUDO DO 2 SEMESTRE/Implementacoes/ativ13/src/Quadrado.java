import java.util.Scanner;

public class Quadrado extends Forma {

	int nCaracteres;
	Scanner ler = new Scanner(System.in);
	
	@Override
	public void coletarEntrada() {
		System.out.println("Entre com o número que representa largura e altura:");
		nCaracteres = ler.nextInt();
	}

	@Override
	public void imprimir() {
		System.out.println("");
		
		for(int i=0; i<nCaracteres; i++){
			for(int j=0; j<nCaracteres; j++){
				System.out.print("x");
			}
			System.out.println("");
		}
	}

}
