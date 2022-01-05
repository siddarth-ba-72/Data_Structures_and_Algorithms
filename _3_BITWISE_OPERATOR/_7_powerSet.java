package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _7_powerSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string : ");
        String str = sc.next();
        sc.close();
        powerSet(str);
    }

    public static void powerSet(String str) {
        int n = str.length();
        int powerSetSize = (int) Math.pow(2, n);
        for (int counter = 0; counter < powerSetSize; counter++) {
            for (int j = 0; j < n; j++) {
                if ((counter & (1 << j)) != 0) {
                    System.out.print(str.charAt(j));
                }
            }
            System.out.println();
        }
    }
    // TC: Theta(n*2^n)

}
