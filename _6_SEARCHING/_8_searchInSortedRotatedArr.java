import java.util.Scanner;
// import java.util.Arrays;

public class _8_searchInSortedRotatedArr {
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
        // Arrays.sort(arr);
        // ? Keep the array in sorted and rotated manner
        System.out.print("Enter the element: ");
        int k = sc.nextInt();
        int z = searchInRotated(arr, k);
        System.out.printf("ans = %d", z);
        sc.close();
    }

    // * Naive solution
    public static int searchNaive(int arr[], int k) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k)
                return i;
        }
        return -1;
    }
    // * TC: O(n)

    // * Optimized solution
    public static int searchInRotated(int arr[], int k) {
        int n = arr.length;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
                return mid;
            // ? left half sorted
            if (arr[low] < arr[mid]) {
                if (k >= arr[low] && k < arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // ? right half sorted
            else {
                if (k > arr[mid] && k <= arr[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
    // * TC: O(log(n))

}
