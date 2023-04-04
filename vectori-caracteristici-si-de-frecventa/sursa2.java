import java.util.Scanner;
class Tutorial {
    static int[] prezent = new int[10];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        prezent[2] = 0;
        while (n != 0) {
            int cifra = n % 10;
            n = n / 10;
            if (cifra == 2)
                prezent[2]++;
        }
        if (prezent[2] > 0)
            System.out.println("cifra 2 apare in numar de " + prezent[2] + " ori");
        else
            System.out.println("cifra 2 nu apare in numar");
    }
}