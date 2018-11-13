import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner ler = new Scanner(System.in);
		Numeros num = new Numeros();
		num.sortear();
		num.imprimir();
		for (int i = 0; i < 4; i++) {
			if (num.getNAdivinhados()<2){
				System.out.println("Entre com o numero:");
				int n = ler.nextInt();
				num.adivinhar(n);				
			}
		}
	}

}
