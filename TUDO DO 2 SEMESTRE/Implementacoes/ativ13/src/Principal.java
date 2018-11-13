import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner ler = new Scanner(System.in);
		System.out.println("\n Entre com a preferencia de desenho:");
		System.out.println("- 1 quadrado");
		System.out.println("- 2 retangulo");
		System.out.println("- 3 triangulo");
		int tPref = ler.nextInt();
		
		if (tPref==1){
			Quadrado quad = new Quadrado();
			quad.coletarEntrada();
			quad.imprimir();
			return;
		} 
		
		if (tPref==2){
			Retangulo ret = new Retangulo();
			ret.coletarEntrada();
			ret.imprimir();
			return;
		} 
		
		if (tPref==3){
			Triangulo tri = new Triangulo();
			tri.coletarEntrada();
			tri.imprimir();
			return;
		} 
	}

}
