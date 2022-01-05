package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _6_oddOccuringNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Finding odd occurences
        System.out.print("n: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(findOdd(arr, n));

        // Finding missing number
        System.out.print("k: ");
        int k = sc.nextInt();
        int mat[] = new int[k];
        System.out.print("Array elements: ");
        for (int i = 0; i < k; i++) {
            mat[i] = sc.nextInt();
        }
        sc.close();
        System.out.println(findMissingValue(mat, k));
    }

    // Naive solution
    public static int oddOccurence(int[] arr, int n) {
        n = arr.length;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i])
                    c++;
            }
            if (c % 2 == 0)
                res = arr[i];
        }
        return res;
    }

    // Optimized solution
    public static int findOdd(int[] arr, int n) {
        int res = 0;
        n = arr.length;
        for (int i = 0; i < n; i++) {
            res = res ^ arr[i];
        }
        return res;
    }

    // Find Missing Value
    public static int findMissingValue(int arr[], int n) {
        n = arr.length;
        int res = 0;
        for (int i = 0; i < n; i++) {
            res = res ^ arr[i];
        }
        int tot = 0;
        for (int j = 0; j <= n + 1; j++) {
            tot = tot ^ j;
        }
        int ans = res ^ tot;
        return ans;
    }

    // Finding twice odd occuring numbers

    // Naive solution
    public static void twiceOddNaive(int arr[], int n) {
        n = arr.length;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i])
                    count++;
                if (count % 2 != 0) {
                    System.out.println(arr[i]);
                }
            }
        }
    }
    // TC: Theta(n^2)

    // Optimized solution
    public static void twoOddOccurences(int arr[], int n) {
        n = arr.length;
        int x = 0;
        int r1 = 0;
        int r2 = 0;
        for (int i = 0; i < n; i++) {
            x = x ^ arr[i];
        }
        int k = x ^ (~(x - 1));
        for (int i = 0; i < n; i++) {
            if ((arr[i] & k) != 0)
                r1 = r1 ^ arr[i];
            else
                r2 = r2 ^ arr[i];
        }
        System.out.println(r1 + " " + r2);
    }

}
