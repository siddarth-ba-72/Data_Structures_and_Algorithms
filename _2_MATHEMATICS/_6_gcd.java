package _2_MATHEMATICS;

import java.util.Scanner;

public class _6_gcd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("a: ");
        int a = scanner.nextInt();
        System.out.print("b: ");
        int b = scanner.nextInt();
        scanner.close();
        System.out.println(gcdOptimizedEuclidean(a, b));
    }

    // Naive solution
    public static int gcdNaive(int a, int b) {
        int res = Math.min(a, b); // gcd cannot be greater than the lowest no
        while (res > 0) {
            if (a % res == 0 && b % res == 0) {
                break;
            }
            res--;
        }
        return res;
    }
    // TC: O(Min(a, b))
    // In Worst case gcd cannot be found

    // Optimized solution
    // EUCLIDEAN ALGORITHM
    public static int gdc_Euclidean(int a, int b) {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        return a;
    }

    // Optimized EUCLIDEAN ALGORITHM
    // Recursive solution

    public static int gcdOptimizedEuclidean(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcdOptimizedEuclidean(b, a % b);
        // We dont need to check if a < b or a > b it takes care on its own.
    }
}
