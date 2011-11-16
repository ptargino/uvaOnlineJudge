package P445;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			char[] letras = line.toCharArray();
			int count = 0;
			for (char letra : letras) {
				if (letra >= '0' && letra <= '9') {
					count += letra - '0';
				} else if (letra == '!') {
					out.append("\n");
				} else if (letra == ' ') {
					// No code
				} else {
					if (letra == 'b') 
						letra = ' ';
					for (int j = 0; j < count; j++)
						out.append(letra);
					count = 0;
				}
			}
			out.append("\n");
		}
		System.out.print(out);
	}
}
