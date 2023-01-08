public class Main {
	public static void main(String[] args) {
		boolean a = true, b = false;
		int i = 1, j = 5;
		do {
		    System.out.print(i + " ");
		    i++;
		    if (i == 6) 
		        a = false;
		} while (a != false);
		System.out.println();
		do {
		    System.out.print(j + " ");
		    j--;
		    if (j == 0)
		        b = true;
		} while (b != true);
	}
}
