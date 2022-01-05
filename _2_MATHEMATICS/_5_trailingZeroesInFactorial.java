package _2_MATHEMATICS;

import java.util.Scanner;

public class _5_trailingZeroesInFactorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println(countTrailingZeroes(n));
    }

    // Naive method/solution
    public static int countTrailingZeroesNaive(int n) {
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact = fact * i;
        }
        int res = 0;
        while (fact % 10 == 0) {
            res++;
            fact = fact / 10;
        }
        return res;
    }
    // TC: Theta(n)
    // This has overflow issues

    // Optimized solution
    public static int countTrailingZeroes(int n) {
        int res = 0;
        for (int i = 5; i <= n; i = i * 5) {
            res = res + (n / i);
        }
        return res;
    }
    // TC: Theta(log(n))
    // Larger inputs acn be taken

}
