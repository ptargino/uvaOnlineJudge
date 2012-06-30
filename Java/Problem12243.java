import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Problem12243 {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();

		while(true){
			String line = in.readLine().toUpperCase();
			if(line.equals("*"))
				break;
			String[] token = line.split(" ");
			char c = token[0].charAt(0);
			boolean isTautogram = true;
			for(String word:token)
				if(c != word.charAt(0)){
					isTautogram = false;
					break;
				}
			System.out.println(isTautogram?"Y":"N");
		}
	}
}
