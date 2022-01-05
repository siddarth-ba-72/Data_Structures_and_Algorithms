import java.util.Scanner;
import java.util.Arrays;

public class _4_noOfOccurences {
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
        System.out.print("Enter the element: ");
        int k = sc.nextInt();
        int z = occurences(arr, k);
        System.out.printf("ans = %d", z);
        sc.close();
    }

    // * Optimized solution
    public static int occurences(int arr[], int k) {
        int n = arr.length;
        int first = firstOccurenceRecursive(arr, 0, n - 1, k);
        if (first == -1)
            return 0;
        else
            return getLastOccuredIndexRec(arr, 0, n - 1, k) - first + 1;
    }
    // * TC: O(log(n))

    // * First occurrence
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

    // * Last occurrence
    public static int getLastOccuredIndexRec(int arr[], int low, int high, int k) {
        int n = arr.length;
        if (low > high)
            return -1;
        int mid = (high + low) / 2;
        if (arr[mid] > k)
            return getLastOccuredIndexRec(arr, low, mid - 1, k);
        else if (arr[mid] < k)
            return getLastOccuredIndexRec(arr, mid + 1, high, k);
        else {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                return getLastOccuredIndexRec(arr, mid + 1, high, k);
        }
    }

}
