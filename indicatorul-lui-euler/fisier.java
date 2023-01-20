import java.util.Scanner;
class Tutorial {
    public static int[] euler = new int[1000001];
    public static int phi(int euler[], int n) {
        for (int i = 1; i <= n; i++)
            euler[i] = i;
        for (int i = 2; i <= n; i++) 
            if (euler[i] == i)
                for (int j = i; j <= n; j = j + i)
                    euler[j] = euler[j] * (i - 1) / i;
        for (int i = 1; i <= n; i++)
            System.out.println(euler[i]);
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        phi(euler, n);
    }
}
