package _2_MATHEMATICS;

import java.util.Scanner;

public class _2_noOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println(countDigits(n));

    }

    public static int countDigits(int x) {
        int res = 0;
        while (x > 0) {
            x /= 10;
            res++;
        }
        return res;
    }
    // TC: Theta(n)

}
