import java.util.Scanner;

public class _16_maxSumSubarr {
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
        int k = maxSumSubarr(arr);
        System.out.println(k);
    }

    // Naive solution
    public static int maxSumSubarrNaive(int[] arr) {
        int n = arr.length;
        int res = arr[0];
        for (int i = 1; i < n; i++) {
            int cur = 0;
            for (int j = i; j < n; j++) {
                cur = cur + arr[i];
                res = Math.max(res, cur);
            }
        }
        return res;
    }
    // TC: Theta(n^2)

    // Optimized solution
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
    // TC: Theta(n)

}
