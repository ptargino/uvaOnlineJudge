package p11220;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Testes {

	public static void main(String[] args) {
		try {
			BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
			StringBuilder out = new StringBuilder();
			String l;
			String[] tokens;
			String[] tokensHotel;
			int numeroParticipantes = 0;
			int budget = 0;
			int hoteis = 0;
			int precoHotel = 0;
			int precoAPagar = 0;

			while ((l = in.readLine()) != null) {
				numeroParticipantes = 0;
				budget = 0;
				hoteis = 0;
				precoHotel = 0;
				precoAPagar = Integer.MAX_VALUE;
				tokens = l.split(" ");
				numeroParticipantes = Integer.parseInt(tokens[0]);
				budget = Integer.parseInt(tokens[1]);
				hoteis = Integer.parseInt(tokens[2]);

				for (int i = 0; i < hoteis; i++) {
					precoHotel = Integer.parseInt(in.readLine());
					tokensHotel = in.readLine().split(" ");
					for (int j = 0; j < tokensHotel.length; j++) {
						if (Integer.parseInt(tokensHotel[j]) >= numeroParticipantes) {
							if ((precoHotel * numeroParticipantes) <= budget && precoHotel * numeroParticipantes <= precoAPagar) {
								precoAPagar = precoHotel * numeroParticipantes;
							}
							break;
						}
					}

				}
				if (precoAPagar == Integer.MAX_VALUE) {
					out.append("stay home\n");
				} else {
					out.append(precoAPagar + "\n");
				}
			}
			System.out.println(out.toString().trim());
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
