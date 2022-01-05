import java.util.Scanner;

public class _21_prefixSum {
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
        System.out.println("Original Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        // Query Sum
        // System.out.print("start: ");
        // int l = sc.nextInt();
        // System.out.print("end: ");
        // int r = sc.nextInt();
        // int k = getSum(arr, l, r);
        // System.out.printf("ans = %d", k);

        // Equillibrium Sum
        boolean isEqm = isEquillibriumPoint(arr);
        if (isEqm == true) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }

        sc.close();
    }

    // Query Sum i.e., sum from l to r
    public static int getSum(int arr[], int l, int r) {
        int n = arr.length;
        int prefixSum[] = new int[n];
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        if (l != 0)
            return prefixSum[r] - prefixSum[l - 1];
        else
            return prefixSum[r];
    }
    // TC: O(1)

    // Equillibrium Sum
    public static boolean isEquillibriumPoint(int arr[]) {
        int n = arr.length;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int lSum = 0;
        for (int i = 0; i < n; i++) {
            if (lSum == (sum - arr[i]))
                return true;
            lSum += arr[i];
            sum -= arr[i];
        }
        return false;
    }

}
