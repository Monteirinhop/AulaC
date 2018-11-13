import java.util.Random;

public class Numeros {

	private int n1 = -1;
	private int n2 = -1;
	private int nChancesUsadas = 0;
	private int nAdivinhados=0;
	
	public int getNAdivinhados(){
		return nAdivinhados;
	}
	
	public void sortear(){
		 Random random = new Random();        
	     n1 = random.nextInt(15);
	     n2 = random.nextInt(15);
	}
	
	public void adivinhar(int x){
		nChancesUsadas++;
		if (nChancesUsadas > 4){
			System.out.println("Suas chances se esgotaram!");
			return;
		} 
		
		if ((n1 == x)&&(n1 != -2)){
			nAdivinhados++;
			System.out.println(nAdivinhados+" números adivinhado(s)!");
			n1=-2;
			return;
		}
		
		if ((n2 == x)&&(n2 != -2)){
			nAdivinhados++;
			System.out.println(nAdivinhados+" números adivinhado(s)!");
			n2=-2;
			return;
		}
	}
	
	public void imprimir(){
		System.out.println(n1 + " e " + n2);
	}
	
}
