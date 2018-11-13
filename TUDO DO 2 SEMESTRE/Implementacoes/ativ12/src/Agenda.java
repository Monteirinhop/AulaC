import java.util.ArrayList;
import java.util.Scanner;

public class Agenda {
	ArrayList<Pessoa> lista = new ArrayList<>();
	
	public void inserirRegistro(){
		System.out.println("Entre com o nome da pessoa:");
		Scanner ler = new Scanner(System.in);
		String nome = ler.nextLine();
		System.out.println("Pressione 1 para contato do tipo Telefone, e 2 para contato do tipo Email:");
		int tContato = ler.nextInt();
		Contato cont = new Contato();
			
		ler = new Scanner(System.in);
		if(tContato==1){
			System.out.println("Entre com o Telefone:");
			String valor = ler.nextLine();
			cont.setTipo("Telefone");
			cont.setValor(valor);
		}else{
			System.out.println("Entre com o Email:");
			String valor = ler.nextLine();
			cont.setTipo("Email");
			cont.setValor(valor);
		}
			
		Pessoa pessoa = new Pessoa();
		pessoa.setNome(nome);
			
		pessoa.setContato(cont);
		
		lista.add(pessoa);
	}
	
	public void imprimir(){
		for (Pessoa pessoa : lista) {
			pessoa.imprimir();
		}
	}
}
