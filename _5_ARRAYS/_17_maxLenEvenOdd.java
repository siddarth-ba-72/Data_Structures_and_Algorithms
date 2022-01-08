import java.util.Scanner;

public class _17_maxLenEvenOdd {
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
        int k = maxEvenOdd(arr);
        System.out.println(k);
    }

    // Naive solution
    public static int maxEvenOddNaive(int arr[]) {
        int n = arr.length;
        int res = 1;
        for (int i = 0; i < n; i++) {
            int cur = 1;
            for (int j = i + 1; j < n; j++) {
                if (((arr[i] & 1) == 0 && (arr[j] & 1) == 1) || ((arr[i] & 1) == 1 && (arr[j] & 1) == 0)) {
                    cur++;
                } else {
                    break;
                }
            }
            res = Math.max(res, cur);
        }
        return res;
    }
    // TC: O(n^2)

    // Optimized solution
    // ? KADANE's ALGORITHM
    public static int maxEvenOdd(int arr[]) {
        int n = arr.length;
        int res = 1;
        int curr = 1;
        for (int i = 1; i < n; i++) {
            if (((arr[i] & 1) == 0 && (arr[i - 1] & 1) == 1) || ((arr[i] & 1) == 1 && (arr[i - 1] & 1) == 0)) {
                curr++;
                res = Math.max(res, curr);
            } else
                curr = 1;
        }
        return res;
    }

}
