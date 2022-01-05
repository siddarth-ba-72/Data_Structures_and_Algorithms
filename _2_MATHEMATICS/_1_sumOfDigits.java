package _2_MATHEMATICS;

public class _1_sumOfDigits {
    public static void main(String[] args) {

    }

    // Iterative solution
    public static int sumOfDigitsIterative(long n) {
        int count = 0;
        while (n != 0) {
            n = n / 10;
            ++count;
        }
        return count;
    }

    // Recursive solution
    public static int sumOfDigitsRecursive(int n) {
        if (n == 0)
            return 0;
        return 1 + sumOfDigitsRecursive(n / 10);
    }

    // Logarithmic solution
    public static int sumOfDigitsLogarithmic(int n) {
        return (int) Math.floor(Math.log(n) + 1);
    }

}
