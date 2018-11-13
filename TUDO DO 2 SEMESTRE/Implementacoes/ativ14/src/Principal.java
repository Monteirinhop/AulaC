import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Criptografia crip = new Criptografia();
		Scanner ler = new Scanner(System.in);
		while(true){
			System.out.println("Entre com as opções:");
			System.out.println("- 1 para digitar texto");
			System.out.println("- 2 para gerar vetor convertido");
			System.out.println("- 3 para criptografar");
			System.out.println("- 4 para decriptografar");
			System.out.println("- 5 para entrar com vetor convertido");
			 ler = new Scanner(System.in);
			int opcao = ler.nextInt();
			
			if (opcao == 1){
				 ler = new Scanner(System.in);
				String textoOrig = ler.nextLine();
				crip.setTexto(textoOrig);
			}else if (opcao ==2){
				crip.converterAlfabeto();	
				crip.imprimirAlfabeto();
			}else if (opcao ==3){
				crip.criptografar();
				System.out.println("Texto Criptogr:"+crip.getTexto());
			}else if (opcao ==4){
				crip.decriptografar();
				System.out.println("Texto Decript:"+crip.getTexto());
			}else if (opcao ==5){
				System.out.println("***implementar***tarefa de casa***");
			}
		}
		
	}

}
