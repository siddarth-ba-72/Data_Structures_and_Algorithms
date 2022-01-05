package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _4_countSetBits {

    static int[] table = new int[256];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        sc.close();
        // System.out.println(countBits(k));
        initialize();
        System.out.println(countSetBits(k));
    }

    // Naive solution
    public static int countSetNaive(int n) {
        int res = 0;
        while (n > 0) {
            // if (n % 2 != 0) {
            // res++;
            // n = n / 2;
            // }
            if ((n & 1) == 1) {
                res++;
                n = n >> 1;
            }
        }
        return res;
    }
    // TC: Theta(total bits in n)

    // Optimized solution
    // BRIAN KERNINGAMS's ALGORITHM
    public static int countBits(int n) {
        System.out.println("BRIAN KERNINGAMS's ALGORITHM");
        int res = 0;
        while (n > 0) {
            n = (n & (n - 1));
            res++;
        }
        return res;
    }
    // TC: Theta(no of set bits in n)

    // LookUp Table Method
    public static void initialize() {
        table[0] = 0;
        for (int i = 1; i < 256; i++) {
            table[i] = (i & 1) + table[i / 2]; // set the table[i] value to set bit value of i
        }
    }

    // TC: Theta(1)
    public static int countSetBits(int n) {
        int res = table[n & 0xFF] + table[(n >> 8) & 0xFF] + table[(n >> 8) & 0xFF] + table[(n >> 8) & 0xFF];
        return res;
    }

    public static int totalSetBitsFrom1ToN(int n) {
        if (n == 0)
            return 0;
        int k = 0;
        while ((1 << k) <= n) {
            k++;
        }
        int x = k - 1;
        int bitsUpto2RaiseToX = x * (1 << (x - 1));
        int remainingFirstHalfBits = n - (1 << x) + 1; // getting the possible no of bits directly form the remaining
                                                       // numbers
        int remainingSecondHalfBits = n - (1 << x); // again the func will run for these many remaining numbers
        int ans = bitsUpto2RaiseToX + remainingFirstHalfBits + totalSetBitsFrom1ToN(remainingSecondHalfBits);
        return ans;
    }

}
