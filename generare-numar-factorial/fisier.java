import java.util.Scanner;
class Tutorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int S = 1;
        for (int i = 1; i <= n; ++i) {
            S = S * i;
        } System.out.println(S);
    }
}
