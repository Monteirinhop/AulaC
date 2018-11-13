import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Criptografia {
	
	private String texto;
	private ArrayList<String> agenda = new ArrayList();
	private String alfabetoPadrao="";
	private String alfabetoNovo="";
	
	public Criptografia(){
		alfabetoPadrao= "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
		//alfabetoPadrao= "abcd";
	}
	
	public void converterAlfabeto(){
		String alfabetoMarcado = alfabetoPadrao;
		
		List<Integer> numeros = new ArrayList<Integer>();
		for (int i=0; i<alfabetoPadrao.length(); i++) {
			numeros.add(i);
		}
		
		//Embaralhamos os números:
		Collections.shuffle(numeros);
		
		for (int i=0; i<alfabetoPadrao.length(); i++) {
			char c = alfabetoPadrao.charAt( numeros.get(i) );
			alfabetoNovo = alfabetoNovo + c;
		}
	
		
	}
	
	public String getTexto() {
		return texto;
	}

	public void setTexto(String texto) {
		this.texto = texto;
	}
	
	public void imprimirAlfabeto(){
		System.out.println("alfabetoPadrao:"+alfabetoPadrao);
		System.out.println("alfabetoNovo:"+alfabetoNovo);
	}
	
	public void criptografar(){
		String textoNovo = "";
		for (int i=0; i<texto.length(); i++) {
			char caractere = texto.charAt(i);
			int indice = alfabetoPadrao.indexOf(caractere);
			
			char caractereNovo = alfabetoNovo.charAt(indice);
			textoNovo = textoNovo + caractereNovo;
		}
		this.texto = textoNovo;
	}

	public void decriptografar() {
		String textoPadrao = "";
		for (int i=0; i<texto.length(); i++) {
			char caractere = texto.charAt(i);
			int indice = alfabetoNovo.indexOf(caractere);
			
			char caracterePadrao = alfabetoPadrao.charAt(indice);
			textoPadrao = textoPadrao + caracterePadrao;
		}
		this.texto = textoPadrao;
	}


}
