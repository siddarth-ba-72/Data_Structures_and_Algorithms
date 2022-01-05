// Analysing the accuracy of the algorithm
// Checking the efficiency of the functions to find the sum of n natural numbers

package _1_TIME_AND_SPACE_COMPLEXITY;

public class _1_analysisOfAlgorithms {
    public static void main(String[] args) {
    }

    // 3 different functions to find the sum of n natural numbers

    public static int sum_1(int n) {
        return (n * (n + 1)) / 2;
    }

    public static int sum_2(int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += i;
        }
        return sum;
    }

    public static int sum_3(int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= i; j++) {
                sum++;
            }
        }
        return sum;
    }

}
