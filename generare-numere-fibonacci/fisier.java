import java.util.Scanner;
class Tutorial {
    // afiseaza primele n numere fibonacci
    public static void generare_fibonacci(int n) {
        int a = 1, b = 1;
        System.out.println(a);
        System.out.println(b);
        for (int i = 1; i <= n; ++i) {
            int c = a + b;
            System.out.println(c);
            a = b;
            b = c;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        generare_fibonacci(n);
    }
}
