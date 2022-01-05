import java.util.Scanner;
import java.util.ArrayList;

public class _9_peakElement {
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
        // peakElementNaive(arr);
        peakElement(arr);
        sc.close();
    }

    // * Naive solution
    public static void peakElementNaive(int arr[]) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int n = arr.length;
        if (n == 1)
            ans.add(arr[0]);
        if (arr[0] >= arr[1])
            ans.add(arr[0]);
        if (arr[n - 1] >= arr[n - 2])
            ans.add(arr[n - 1]);
        for (int i = 1; i < n - 1; i++) {
            if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i - 1])) {
                ans.add(arr[i]);
            }
        }
        System.out.print("peak elements:- [ ");
        for (int i = 0; i < ans.size(); i++) {
            System.out.print(ans.get(i) + " ");
        }
        System.out.println("]");
    }
    // * TC: O(n)

    // * Optimized solution
    public static void peakElement(int arr[]) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int n = arr.length;
        // if (n == 1)
        // ans.add(arr[0]);
        // if (arr[0] >= arr[1])
        // ans.add(arr[0]);
        // if (arr[n - 1] >= arr[n - 2])
        // ans.add(arr[n - 1]);
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
                ans.add(arr[mid]);
            if (mid > 0 && arr[mid - 1] >= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        System.out.print("peak elements:- [ ");
        for (int i = 0; i < ans.size(); i++) {
            System.out.print(ans.get(i) + " ");
        }
        System.out.println("]");
    }
    // * TC: O(log(n))
    // * AS: O(1)

}
