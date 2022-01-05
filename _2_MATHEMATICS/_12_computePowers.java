package _2_MATHEMATICS;

import java.util.Scanner;

public class _12_computePowers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        sc.close();
        int k = fastPower(x, n);
        System.out.println(k);
    }

    // Naive solution
    public static int power(int x, int n) {
        int res = 1;
        for (int i = 1; i <= n; i++) {
            res = res * x;
        }
        return res;
    }
    // TC: Theta(n)

    // Optimized solution
    public static int pow(int x, int n) {
        if (n == 0)
            return 1;
        int temp = pow(x, (n / 2));
        temp = temp * temp;
        if (n % 2 == 0)
            return temp;
        else
            return temp * x;
    }
    // TC: Theta(log(n))
    // AS: Theta(log(n))

    // Fast Power(Bit)
    // Iterative solution
    public static int fastPower(int x, int n) {
        int res = 1;
        while (n > 0) {
            if (n % 2 != 0) {
                res = res * x;
            }
            x = x * x;
            n = n / 2;
        }
        return res;
    }
    // TC: Theta(log(n))
    // AS: O(1) -> Better than Recursive solution

}
