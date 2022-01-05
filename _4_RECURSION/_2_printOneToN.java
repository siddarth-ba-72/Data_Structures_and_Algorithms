import java.util.Scanner;

public class _2_printOneToN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        sc.close();
        printOneToN(k);
    }

    public static void printOneToN(int n) {
        if (n == 0)
            return;
        printOneToN(n - 1);
        System.out.println(n);
    }

}
