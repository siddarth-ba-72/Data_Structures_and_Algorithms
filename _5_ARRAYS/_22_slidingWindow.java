import java.util.Scanner;

public class _22_slidingWindow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Size of the Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Insert Array Elements here:- ");
        for (int i = 0; i < n; i++) {
            System.out.printf("arr[%d] : ", i);
            arr[i] = sc.nextInt();
        }
        System.out.print("k: ");
        int k = sc.nextInt();
        sc.close();
        System.out.println("Original Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        int z = slidingWindoxMaxSum(arr, k);
        System.out.printf("ans = %d", z);
    }

    // Naive solution
    public static int swMinKNaive(int arr[], int k) {
        int n = arr.length;
        int max_sum = Integer.MIN_VALUE;
        for (int i = 0; i + k - 1 < n; i++) {
            int sum = 0;
            for (int j = 0; j < k; j++) {
                sum += arr[i + j];
            }
            max_sum = Math.max(max_sum, sum);
        }
        return max_sum;
    }
    // TC: O((n-k) * k) == O(n^2)

    // Optimized solution
    public static int slidingWindoxMaxSum(int arr[], int k) {
        int n = arr.length;
        int currSum = 0;
        for (int i = 0; i < k; i++) {
            currSum += arr[i];
        }
        int maxSum = currSum;
        for (int i = k; i < n; i++) {
            currSum += (arr[i] - arr[i - k]);
            maxSum = Math.max(maxSum, currSum);
        }
        return maxSum;
    }
    // TC: O(n)

}
