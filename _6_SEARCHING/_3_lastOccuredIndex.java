import java.util.Scanner;
import java.util.Arrays;

public class _3_lastOccuredIndex {
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
        int z = getLastOccuredIndexRec(arr, 0, n, k);
        // int y = getLastOccuredIndexIterative(arr, k);
        System.out.printf("ans = %d", z);
        // System.out.printf("ans = %d", y);
        sc.close();
    }

    // * Recursive solution
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

    // * Iterative solution
    public static int getLastOccuredIndexIterative(int[] arr, int k) {
        int n = arr.length;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > k)
                low = mid + 1;
            else if (arr[mid] < k)
                high = mid - 1;
            else {
                if (mid == n - 1 || arr[mid] != arr[mid + 1])
                    return mid;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }

}
