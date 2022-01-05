package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _5_powerOf2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        sc.close();
        // System.out.println(pow2(k));
        System.out.println(powersOf2(k));
    }

    // Naive solution
    public static boolean pow2(int n) {
        if (n == 0)
            return false;
        while (n != 1) {
            if (n % 2 != 0)
                return false;
            n /= 2;
        }
        return true;
    }

    // Optimized solution
    // We can also use BRIAN KERNINGAMS's ALGORITHM'
    // Powers of two has only 1 set bit
    public static boolean powersOf2(int n) {
        if (n == 0)
            return false;
        return ((n & (n - 1)) == 0); // we check that there is only one set bit
    }
}
