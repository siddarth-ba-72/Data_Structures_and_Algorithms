import java.util.Scanner;

public class _19_majElement {
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
        int k = findMajority(arr);
        System.out.printf("ans = %d", k);
    }

    // * Naive solution
    public static int findMajNaive(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > n / 2)
                return i;
        }
        return -1;
    }
    // * TC: O(n^2)

    // * Optimized solution
    // ? MOORE's VOTING ALGORITHM
    public static int findMajority(int[] arr) {
        int n = arr.length;
        int res = 0, count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[res] == arr[i])
                count++;
            else
                count--;
            if (count == 0) {
                res = i;
                count = 1;
            }
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[res] == arr[i])
                count++;
        }
        if (count <= n / 2)
            res = -1;

        return res;
    }

}
