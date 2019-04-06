import java.util.Scanner;

public class ABC40_a {
	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int x = scanner.nextInt();
		scanner.close();
		if (x > n/2) {
			System.out.println(n - x);
		} else {
			System.out.println(x - 1);
		}
	}
}
