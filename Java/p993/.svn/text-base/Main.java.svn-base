package p993;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		for (int i = 0; i < n; i++) {
			int numero = in.nextInt();
			int digito = 9;
			String saida = "";
			if (numero > 1) {
				while (true) {
					if (digito <= 1)
						break;
					if (numero % digito == 0) {
						saida = digito + saida;
						numero /= digito;
					} else {
						digito -= 1;
					}
				}
			} else {
				saida += (numero == 0) ? "10" : numero;
			}

			if (numero > 1) {
				System.out.println(-1);
			} else {
				System.out.println(saida);
			}
		}
	}

}
