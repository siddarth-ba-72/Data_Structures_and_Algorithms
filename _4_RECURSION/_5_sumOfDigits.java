import java.util.Scanner;

public class _5_sumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        System.out.println(sumOfDigitsRecursive(k));
        sc.close();
    }

    public static int sumOfDigitsRecursive(int n) {
        if (n <= 9)
            return n;
        return n % 10 + sumOfDigitsRecursive(n / 10);
    }
    // TC: Theta(n)
    // AS: Theta(d)

    // Iterative solution takes less time nd is faster

}
