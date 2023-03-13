public class Tutorial {
    static int[] v = new int[1000001];
    public static void ciur() {
        v[0] = v[1] = 1;
        for (int i = 2; i * i < 1000001; ++i) {
            if (v[i] == 0) {
                for (int j = 2; i * j < 1000001; ++j) {
                    v[i * j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) {
        ciur();
    }
}
