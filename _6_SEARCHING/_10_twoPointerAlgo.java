import java.util.Scanner;
import java.util.Arrays;

public class _10_twoPointerAlgo {
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
        System.out.print("Enter Sum: ");
        int k = sc.nextInt();
        // sumPairNaive(arr, k);
        sumPair(arr, k);
        sc.close();
    }

    // * Pair Sum

    // * Naive solution
    public static void sumPairNaive(int arr[], int k) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == k) {
                    System.out.print("Pair:- ");
                    System.out.println(arr[i] + " " + arr[j]);
                } else {
                    System.out.println("No Pair Found");
                    return;
                }
            }
        }
    }
    // * TC: O(n^2)

    // * TWO POINTER ALGORITHM
    // * Optimized solution
    // * Binary Search for Sorted Array
    public static void sumPair(int arr[], int k) {
        Arrays.sort(arr);
        int n = arr.length;
        int left = 0, right = n - 1;
        while (left < right) {
            if ((arr[left] + arr[right]) == k) {
                System.out.print("Pair:- ");
                System.out.println(arr[left] + " " + arr[right]);
                return;
            } else if ((arr[left] + arr[right]) > k)
                right -= 1;
            else if ((arr[left] + arr[right]) < k)
                left += 1;
        }
        if (left >= right) {
            System.out.println("No pair found");
        }
    }

    // * Triplet Sum

    // * Naive solution
    // * TC: Theta(n^3)

    // * Optimized solution
    public static void tripletSum(int arr[], int k) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            sumPair(arr, k - arr[i]);
        }
    }

}
