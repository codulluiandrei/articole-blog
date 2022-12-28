import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if (a % 9 == 0) 
            System.out.println("Cifra de control este 9");
        else 
            System.out.println("Cifra de control este " + a % 9);
    }
}
