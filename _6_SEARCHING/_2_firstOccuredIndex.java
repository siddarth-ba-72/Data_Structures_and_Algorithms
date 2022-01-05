import java.util.Scanner;
import java.util.Arrays;

public class _2_firstOccuredIndex {
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
        Arrays.sort(arr);
        System.out.println("Original Sorted Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        System.out.print("Enter the element to find for first Occurence: ");
        int k = sc.nextInt();
        // int a = firstOccNaive(arr, k);
        // int b = firstOccurenceRecursive(arr, 0, n - 1, k);
        int b = firstOccurenceIterative(arr, k);
        System.out.printf("ans = %d", b);
        sc.close();
    }

    // Naive solution
    public static int firstOccNaive(int arr[], int k) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k)
                return i;
        }
        return -1;
    }
    // TC: O(n)
    // AS: O(1)

    // Optimized solution Recursive
    public static int firstOccurenceRecursive(int arr[], int low, int high, int k) {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (k > arr[mid])
            return firstOccurenceRecursive(arr, mid + 1, high, k);
        else if (k < arr[mid])
            return firstOccurenceRecursive(arr, low, mid - 1, k);
        else {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                return firstOccurenceRecursive(arr, low, mid - 1, k);
        }
    }

    // Optimized solution Iterative
    public static int firstOccurenceIterative(int arr[], int k) {
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (k > arr[mid])
                low = mid + 1;
            else if (k < arr[mid])
                high = mid - 1;
            else {
                if (mid == 0 || arr[mid - 1] != arr[mid])
                    return mid;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }

}
