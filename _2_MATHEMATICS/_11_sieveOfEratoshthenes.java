package _2_MATHEMATICS;

import java.util.Arrays;

public class _11_sieveOfEratoshthenes {
    public static void main(String[] args) {

    }

    // Naive solution
    public static void printPrimes(int n) {
        for (int i = 2; i < n; i++) {
            if (isPrimeFaster(i))
                System.out.println(i);
        }
    }
    // TC: O(n*sqrt(n^(3/2)))

    // Optimized solution
    // Sieve of Eratosthenes
    public static void soe(int n) {
        boolean bool[] = new boolean[n + 1];
        Arrays.fill(bool, true);
        for (int i = 2; i * i < n; i++) {
            if (isPrimeFaster(i)) {
                for (int j = 2 * i; j <= n; j = j + i) {
                    bool[j] = false;
                    // here we mark all the multiples of 2, 3 and 5 as false.
                }
            }
        }
        for (int i = 2; i <= n; i++) {
            if (isPrimeFaster(n)) {
                System.out.print(i + " ");
            }
        }
    }

    // Sieve of Eratosthenes Optimized
    public static void soeOptimized(int n) {
        boolean bool[] = new boolean[n + 1];
        Arrays.fill(bool, true);
        for (int i = 2; i <= n; i++) {
            if (isPrimeFaster(n)) {
                System.out.print(i + " ");
                // Inner loop wont run if "i > sqrt(n)"
                for (int j = i * i; j <= n; j = j + i) {
                    bool[j] = false;
                }
            }
        }
    }
    // TC: O(nlog(log(n)))

    // Function to check the prime numbers
    public static boolean isPrimeFaster(int n) {
        if (n == 1)
            return false;
        if (n == 2 || n == 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i += 6) {
            // here we go only till sqrt(n)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

}
