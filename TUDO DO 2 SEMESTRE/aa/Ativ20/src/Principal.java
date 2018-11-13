import java.awt.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		Scanner ler = new Scanner(System.in);
		while(true){
			System.out.println("Entre com as opções:");
			System.out.println("- 1 para entrar com Novo Funcionaro");
			System.out.println("- 2 para entrar com Venda");
			System.out.println("- 3 para calcular pagamentos mes");
			ler = new Scanner(System.in);
			int opcao = ler.nextInt();
			switch (opcao) {
			case 1:
				System.out.println("Insira se você é vendedor ou gerente");
				String funcao = ler.next();
				if (funcao !=null && funcao == "vendedor") {
					System.out.println("Insira o seu Nome");
					String NomeFuncionario = ler.next();
					System.out.println("Insira a Sua ID");
					int idFuncionario = ler.nextInt();
					System.out.println("Insira seu Salário");
					float salarioFuncionario = ler.nextFloat();
					ArrayList<Vendedor> vendedor = new ArrayList<Vendedor>();
					
					
					
					Funcionario vendedor = new Vendedor(idFuncionario,NomeFuncionario,salarioFuncionario);
					
				}
				if (funcao !=null && funcao == "gerente") {
					System.out.println("Insira o seu Nome");
					String NomeGerente = ler.next();
					System.out.println("Insira a Sua ID");
					int idGerente = ler.nextInt();
					System.out.println("Insira seu Salário");
					float salarioGerente = ler.nextFloat();
					Funcionario gerente = new Gerente(idGerente,NomeGerente,salarioGerente);
					
				}
					
					break; 
			case 2:
				
				
				
					
			default:
				break;
			};}}}
		
			// entrar com funcionarios
			
		
			// entrar com vendas para cada vendedor
		
			// calcular pagamento do mes

