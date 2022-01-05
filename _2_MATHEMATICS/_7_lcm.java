package _2_MATHEMATICS;

import java.util.Scanner;

public class _7_lcm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("a: ");
        int a = sc.nextInt();
        System.out.print("b: ");
        int b = sc.nextInt();
        sc.close();
        System.out.println(lcm_Optimized(a, b));
    }

    // Naive solution
    public static int lcm_Naive(int a, int b) {
        int res = Math.max(a, b);
        while (true) {
            if (res % a == 0 && res % b == 0) {
                return res;
            }
            res++;
        }
    }

    // Optimized solution
    public static int gcdOptimizedEuclidean(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcdOptimizedEuclidean(b, a % b);
        // We dont need to check if a < b or a > b it takes care on its own.
    }

    // wkt: a * b = gcd(a, b) * lcm(a, b)
    public static int lcm_Optimized(int a, int b) {
        int k = gcdOptimizedEuclidean(a, b);
        return (a * b) / k;
    }

}
