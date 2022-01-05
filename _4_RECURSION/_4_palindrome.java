import java.util.Scanner;

public class _4_palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = str.length();
        System.out.println(isPalindrome(str, 0, n - 1));
        sc.close();
    }

    public static boolean isPalindrome(String str, int start, int end) {
        if (start >= end)
            return true;
        return (str.charAt(start) == str.charAt(end) && isPalindrome(str, start + 1, end - 1));
    }
    // TC: O(n)

}
