import java.util.Scanner;
class Tutorial {
    	static int S = 0;
	public static void suma(int a, int b) {
		S = a + b;
	}
	public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		suma(a, b);
		System.out.println(S);
	}
}
