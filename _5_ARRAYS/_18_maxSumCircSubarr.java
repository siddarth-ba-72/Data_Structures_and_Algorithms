import java.util.Scanner;

public class _18_maxSumCircSubarr {
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
        sc.close();
        System.out.println("Original Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        // int k = maxCircSubarrNaive(arr);
        int k = maxSumCircSubarray(arr);
        System.out.println(k);
    }

    // Naive solution
    public static int maxCircSubarrNaive(int arr[]) {
        int n = arr.length;
        int res = arr[0];
        for (int i = 0; i < n; i++) {
            int curr_max = arr[i];
            int curr_sum = arr[i];
            for (int j = 1; j < n; j++) {
                int index = (i + j) % n;
                curr_sum += arr[index];
                curr_max = Math.max(curr_sum, curr_max);
            }
            res = Math.max(res, curr_max);
        }
        return res;
    }
    // TC: O(n^2)

    // Optimized solution
    public static int maxSumCircSubarray(int[] arr) {
        int n = arr.length;
        int max_normal = maxSumSubarr(arr);
        if (max_normal < 0)
            return max_normal;
        int arrSum = 0;
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
            arr[i] = -arr[i];
        }
        int maxCircular = arrSum + maxSumSubarr(arr);
        return Math.max(maxCircular, max_normal);
    }
    // TC: O(n)

    // maximum sum of subarray (normal)
    // KADANE's ALGORITHM
    public static int maxSumSubarr(int[] arr) {
        int n = arr.length;
        int res = arr[0];
        int maxEnding = arr[0];
        for (int i = 0; i < n; i++) {
            maxEnding = Math.max(maxEnding + arr[i], arr[i]);
            res = Math.max(res, maxEnding);
        }
        return res;
    }

}
