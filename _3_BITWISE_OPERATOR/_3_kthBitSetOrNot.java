package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _3_kthBitSetOrNot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.close();
        System.out.println(kthBitSetOrNotLS(n, k));
        // System.out.println(kthBitSetOrNotRS(n, k));
    }

    // Method-1 Left shift
    public static boolean kthBitSetOrNotLS(int n, int k) {
        if ((n & (1 << (k - 1))) != 0)
            return true;
        else
            return false;
    }
    // Set kth bit to 1 of the number '1' and check for '&'

    // Method-2 Right shift
    public static boolean kthBitSetOrNotRS(int n, int k) {
        if ((n >> (k - 1) & 1) == 1)
            return true;
        else
            return false;
    }
    // Bring kth bit of 'n' to last position and check for '&' with '1'

}
