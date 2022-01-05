package _2_MATHEMATICS;

import java.util.Scanner;

public class _4_factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to find its factorial : ");
        int k = sc.nextInt();
        sc.close();
        System.out.println(factorialRecursive(k));
        // System.out.println(factorialIterative(k));

    }

    // Recursive solution
    public static int factorialRecursive(int n) {
        if (n < 0) {
            n = -n;
        }
        if (n == 0 || n == 1)
            return 1;
        return n * factorialRecursive(n - 1);
    }
    // TC: Theta(n)
    // AS: Theta(n)

    // Iterative solution
    public static int factorialIterative(int n) {
        int res = 1;
        for (int i = 2; i <= n; i++) {
            res *= i;
        }
        return res;
    }
    // TC: Theta(n)
    // AS: O(1)

    // Iterative soln is better than recursive soln.

}
