import java.util.Scanner;
class Tutorial {
    public static boolean verifpal(int a) {
        int copie = a, oglinda = 0;
        while (a > 0) {
            oglinda = oglinda * 10 + a % 10;
            a = a / 10;
        } if (oglinda == copie)
            return true;
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if (verifpal(a))
            System.out.println("nr este palindrom");
        else
            System.out.println("nr nu este palindrom");
    }
}
