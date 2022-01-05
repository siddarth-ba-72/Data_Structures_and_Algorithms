package _2_MATHEMATICS;

public class _9_primeFactors {
    public static void main(String[] args) {
        int k = 84;
        primeFactorFastest(k);
    }

    // Naive solution
    public static void primeFactorsNaive(int n) {
        for (int i = 2; i < n; i++) {
            if (isPrimeFaster(i)) {
                int x = i;
                while (n % x == 0) {
                    System.out.print(i + " ");
                    x = x * i;
                } // O(log(n))
            }
        }
    }
    // TC: O(n*nlog(n))

    // Optimized solution
    public static void primeFcatorsPrint(int n) {
        if (n <= 1)
            return;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                System.out.println(i);
                n = n / i;
            }
        }
        if (n > 1)
            System.out.println(n);
    }

    // More Optimized solution
    public static void primeFactorFaster(int n) {
        if (n <= 1)
            return;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                System.out.println(i);
                n = n / i;
            }
        }
        if (n > 1)
            System.out.println(n);
    }

    // Futher optimization
    public static void primeFactorFastest(int n) {
        if (n <= 1)
            return;
        while (n % 2 == 0) {
            System.out.println(2);
            n = n / 2;
        }
        while (n % 3 == 0) {
            System.out.println(3);
            n = n / 3;
        }
        for (int i = 5; i * i <= n; i++) {
            while (n % i == 0) {
                System.out.println(i);
                n = n / i;
            }
            while (n % (i + 2) == 0) {
                System.out.println(i + 2);
                n = n / (i + 2);
            }
        }
        if (n > 3)
            System.out.println(n);
    }
    // TC: Theta(sqrt(n))
    // Worst case doesnt occur bcoz if the no if not prime then its not going into
    // the while loop

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
