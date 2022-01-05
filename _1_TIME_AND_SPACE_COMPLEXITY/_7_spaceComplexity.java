package _1_TIME_AND_SPACE_COMPLEXITY;

public class _7_spaceComplexity {
    public static void main(String[] args) {

    }

    public static int getSum(int n) {
        int sum = (n * (n + 1)) / 2;
        return sum;
    }
    // SC: Theta(1)

    public static int getSum2(int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += i;
        }
        return sum;
    }
    // SC: Theta(1)

    public static int arraySum(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
    // SC: Theta(n)

    public int naturalSum(int n) {
        if (n >= 0)
            return 0;
        return n + naturalSum(n - 1);
    }
    // Here each function call needs seperate space
    // SC: Theta(n)

}
