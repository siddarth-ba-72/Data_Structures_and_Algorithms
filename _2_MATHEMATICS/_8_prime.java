package _2_MATHEMATICS;

import java.util.Scanner;

public class _8_prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        sc.close();
        System.out.println(isPrimeFaster(k));
    }

    // Naive solution
    public static boolean isPrimeNaive(int n) {
        if (n == 1)
            return false;
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    // Worst case is when n is a prime number
    // TC: O(n)

    // Optimized solution
    public static boolean isPrime(int n) {
        if (n == 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            // here we go only till sqrt(n)
            if (n % i == 0)
                return false;
        }
        return true;
    }
    // TC: O(sqrt(n))
    // But if n is large then even sqrt(n) can also be large

    // More Optimized solution
    // We can skip for all even nos
    // We can skip for all nos divisible by 3
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
