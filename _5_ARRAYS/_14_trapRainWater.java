import java.util.Scanner;

public class _14_trapRainWater {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Size of the Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Insert Array Elements here:- ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
        int k = getWater(arr);
        System.out.printf("Maximum water stored = %d units", k);
    }

    // Naive solution
    public static int getWaterNaive(int arr[]) {
        int n = arr.length;
        int res = 0;
        for (int i = 1; i < n - 1; i++) {
            int lmax = arr[i];
            for (int j = 0; j < i; j++) {
                lmax = Math.max(lmax, arr[j]);
            }
            int rmax = arr[i];
            for (int j = i + 1; j < n; j++) {
                rmax = Math.max(rmax, arr[j]);
            }
            res = res + Math.min(lmax, rmax) - arr[i];
        }
        return res;
    }
    // TC: Theta(n^2)

    // Optimized solution
    public static int getWater(int arr[]) {
        int n = arr.length;
        int res = 0;
        int lmax[] = new int[n];
        int rmax[] = new int[n];
        lmax[0] = arr[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = Math.max(arr[i], lmax[i - 1]);
        }
        rmax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            rmax[j] = Math.max(arr[j], rmax[j + 1]);
        }
        for (int i = 1; i < n - 1; i++) {
            res = res + Math.min(lmax[i], rmax[i]) - arr[i];
        }
        return res;
    }
    // TC: Theta(n)
    // AS: Theta(n)

}
