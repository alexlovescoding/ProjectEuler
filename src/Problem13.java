import java.math.BigInteger;
import java.util.Scanner;

public class Problem13 {
	public static void main(String[] args) {
		BigInteger sum = new BigInteger("20");
		Scanner cat = new Scanner(System.in);
		for(int i = 0; i<100; i++) {
			BigInteger num = new BigInteger(cat.nextLine());
			sum = sum.add(num);
		}
		System.out.println(sum.toString().substring(0, 10));
		cat.close();
	}
}
