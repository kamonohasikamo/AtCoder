import java.util.Scanner;

public class ABC40_b {
	public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		int ans=100000000;
		for (int i=1; i < 1000;i++) {
			for (int j=1; j < 1000;j++) {
				if ((i * j) <= n) {
					ans = Math.min(ans, Math.abs(i - j) + (n - i * j));
				}
			}
		}
		System.out.println(ans);
	}
}
