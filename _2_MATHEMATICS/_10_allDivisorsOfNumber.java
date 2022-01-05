package _2_MATHEMATICS;

public class _10_allDivisorsOfNumber {
    public static void main(String[] args) {
        int k = 28;
        // divisorsNaive(k);
        // divisors(k);
        divisorsOptimized(k);
    }

    // Naive solution
    public static void divisorsNaive(int n) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
    }
    // TC: Theta(n)
    // AS: Theta(1)

    // Optimized solution
    public static void divisors(int n) {
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                System.out.println(i);
                if (i != (n / i)) {
                    System.out.println(n / i);
                }
            }
        }
        // These are in ordered manner
    }

    // Much Optimized solution
    public static void divisorsOptimized(int n) {
        int i;
        for (i = 1; i * i < n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
        for (; i >= 1; i--) {
            if (n % i == 0) {
                System.out.print(n / i + " ");
            }
        }
    }

}
