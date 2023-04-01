import java.util.Scanner;
class Tutorial {
    public static int cmmdc(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        } return a;
    }
    public static int cmmmc(int a, int b) {
        int d = cmmdc(a, b);
        return (a * b) / d;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(cmmdc(a, b) + " " + cmmmc(a, b));
    }
}
