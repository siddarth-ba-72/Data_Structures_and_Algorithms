package _2_MATHEMATICS;

import java.util.Scanner;

public class _3_palindromeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to find wheather its palindrome or not : ");
        int n = sc.nextInt();
        sc.close();
        System.out.println(isPalindrome(n));

    }

    public static boolean isPalindrome(int n) {
        int rev = 0;
        int m = n;
        while (m > 0) {
            int k = m % 10;
            rev = (rev * 10) + k;
            m = m / 10;
        }
        return (rev == n);
    }
    // d = no of digits
    // TC: Theta(d)

}
