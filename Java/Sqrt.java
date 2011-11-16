import java.util.Scanner;

public class Sqrt {
  public static double sqrt(double number, double offset) {

    double sqrt;

    double maxSq;

    double minSq;

    if (number == 1)
      return 1;

    if (number > 1) {
      maxSq = number;
      minSq = 0;
    } else {
      maxSq = 1;
      minSq = number;
    }

    sqrt = (maxSq + minSq) / 2;

    while (Math.abs(number - sqrt * sqrt) > offset) {
      sqrt = (minSq + maxSq) / 2;
      if (sqrt * sqrt > number) {
        maxSq = sqrt;
      } else {
        minSq = sqrt;
      }
    }

    return sqrt;
  }
  
  public static void main(String[] args) throws Exception {
    Scanner in = new Scanner(System.in);
    System.out.println(sqrt(in.nextDouble(),0.00000001));
  }
}
