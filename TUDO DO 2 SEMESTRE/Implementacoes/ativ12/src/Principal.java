import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner ler = new Scanner(System.in);
		Agenda ag = new Agenda();
		while(true){
			System.out.println("\n Entre com:");
			System.out.println("- 1 para Adicionar Pessoa");
			System.out.println("- 2 para Listar Pessoas");
			System.out.println("- 3 para sair");
			int tAcao = ler.nextInt();
			if (tAcao==1){
				ag.inserirRegistro();
			}else if (tAcao==2){
				ag.imprimir();
			}else if (tAcao==3){
				return;
			}
		}
		
		
	}

}
