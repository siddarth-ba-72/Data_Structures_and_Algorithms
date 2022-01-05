package _10_STRINGS;

public class _3_palindromeStrs {

	public static boolean isPal(String str) {
		StringBuilder rev = new StringBuilder(str);
		rev.reverse();
		return str.equals(rev.toString());
	}
	// * TC: Theta(n)
	// * AS: Theta(n)

	// * Optimized Solution
	public static boolean isPalindrome(String str) {
		int i = 0, j = str.length() - 1;
		while (i < j) {
			if (str.charAt(i) != str.charAt(j))
				return false;
			i++;
			j--;
		}
		return true;
	}
	// * TC: O(n)
	// * AS: O(1)

	public static void main(String[] args) {
		String str = "ABCDCBA";
		System.out.println(isPal(str));
		System.out.println(isPalindrome(str));
	}
}
