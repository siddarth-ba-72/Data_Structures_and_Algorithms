package _1_TIME_AND_SPACE_COMPLEXITY;

public class _2_best_avg_worst_case {
    public static void main(String[] args) {

        // BEST CASE => Minimum order of growth
        // AVG CASE => Growth under some assumptions
        // WORST CASE => Maximum order of growth

    }

    // func 1
    public static int getSum(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
    // Time taken => A(n)+B
    // Order of Growth => n

    // func2
    public static int getSumFaster(int arr[], int n) {
        if (n % 2 == 0)
            return 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
    // Time taken => ((A(n)+B) + C)/2
    // Order of Growth => n

}
