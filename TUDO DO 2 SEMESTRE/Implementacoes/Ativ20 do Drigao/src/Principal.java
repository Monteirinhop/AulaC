import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		List<Funcionario> funcionarios = new ArrayList<Funcionario>();
		
		Scanner ler = new Scanner(System.in);
		while(true){
			System.out.println("Entre com as opções:");
			System.out.println("- 1 para entrar com Novo Funcionario");
			System.out.println("- 2 para calcular pagamentos mes");
			ler = new Scanner(System.in);
			int opcao = ler.nextInt();
			
			// entrar com funcionarios
			if (opcao == 1){
				System.out.println("Entre com o nome ");
				ler = new Scanner(System.in);
				String nome = ler.nextLine();
				
				System.out.println("Entre com o salario ");
				ler = new Scanner(System.in);
				float salario = ler.nextFloat();
				
				System.out.println("Entre com 1 para vendedor e 2 para gerente");
				ler = new Scanner(System.in);
				int tipo = ler.nextInt();
				
				if (tipo==1){
					Vendedor vend = new Vendedor();
					vend.nome = nome;
					vend.salario = salario;
					
					System.out.println("Entre com o valor de vendas ");
					ler = new Scanner(System.in);
					float valVend = ler.nextFloat();
					vend.valorVendas = valVend;
					funcionarios.add(vend);
				}else if (tipo==2){
					Gerente ger = new Gerente();
					ger.nome = nome;
					ger.salario = salario;
					funcionarios.add(ger);
				}
			}
			
			
		
		
			// calcular pagamento do mes
			if (opcao == 2){
				for (Funcionario funcionario : funcionarios) {
					System.out.println("Nome:"+funcionario.nome + " - Valor Receber:"+funcionario.calcularPag());
				}
			}
		}
	}
}
