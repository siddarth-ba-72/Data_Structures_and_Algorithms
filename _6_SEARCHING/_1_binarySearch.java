import java.util.Scanner;
import java.util.Arrays;

public class _1_binarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Number of TestCases : ");
        int t = sc.nextInt();
        while (t-- > 0) {
            System.out.print("Size of the Array : ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.println("Insert Array Elements here:- ");
            for (int i = 0; i < n; i++) {
                System.out.printf("arr[%d] : ", i);
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println("Original Array: ");
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
            System.out.print("Enter the element to find : ");
            int k = sc.nextInt();
            // int z = findElemIterative(arr, k);
            int z = binarySearchRecursive(arr, 0, n - 1, k);
            System.out.printf("index = %d", z);
            System.out.println();
        }

        sc.close();
    }

    // * Naive solution
    // * Linear search method, assuming that the array is not sorted
    // * TC: Theta(n)

    // * BINARY SEARCH Iterative
    public static int findElemIterative(int arr[], int k) {
        int n = arr.length;
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
                return mid;
            if (arr[mid] > k)
                high = mid - 1;
            if (arr[mid] < k)
                low = mid + 1;
        }
        return -1;
    }

    // * BINARY SEARCH Recursive
    public static int binarySearchRecursive(int arr[], int low, int high, int k) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
                return mid;
            if (arr[mid] < k)
                return binarySearchRecursive(arr, mid + 1, high, k);
            if (arr[mid] > k)
                return binarySearchRecursive(arr, low, mid - 1, k);
        }
        return -1;
    }
    // * Succesful searches TC: O(log(n))
    // * Unssccesful searches TC: Theta(log(n))

}
