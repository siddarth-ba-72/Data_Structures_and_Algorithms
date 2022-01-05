import java.util.Scanner;

public class _21_prefixSum2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Size of Arrays : ");
        int n = sc.nextInt();
        int L[] = new int[n];
        int R[] = new int[n];
        System.out.println("Insert Array Elements for L:- ");
        for (int i = 0; i < n; i++) {
            System.out.printf("L[%d] : ", i);
            L[i] = sc.nextInt();
        }
        System.out.println("Insert Array Elements for R:- ");
        for (int i = 0; i < n; i++) {
            System.out.printf("R[%d] : ", i);
            R[i] = sc.nextInt();
        }
        System.out.print("L Array:  ");
        for (int i = 0; i < n; i++) {
            System.out.print(L[i] + " ");
        }
        System.out.println();
        System.out.print("R Array:  ");
        for (int i = 0; i < n; i++) {
            System.out.print(R[i] + " ");
        }
        System.out.println();
        int k = maxOcc(L, R, n);
        System.out.printf("Maximum occuring Element in all ranges = %d", k);
        sc.close();
    }

    // Maximum occuring element in a range
    public static int maxOcc(int L[], int R[], int n) {
        int arr[] = new int[1000];
        for (int i = 0; i < n; i++) {
            arr[L[i]]++;
            arr[R[i] + 1]--;
        }
        int maxm = arr[0];
        int res = 0;
        for (int i = 1; i < 1000; i++) {
            arr[i] += arr[i - 1];
            if (maxm < arr[i]) {
                maxm = arr[i];
                res = i;
            }
        }
        return res;
    }

}
