import java.util.Scanner;
class Tutorial {
    static int rez;
	public static void fact(int n) {
		if (n == 0)
		    rez = 1;
		else {
		    fact(n - 1);
		    rez = rez * n;
		} 
	}
	public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		fact(n);
		System.out.println(rez);
	}
}
