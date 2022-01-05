import java.util.Scanner;

public class _10_subsetSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.printf("arr[%d] : ", i + 1);
            arr[i] = sc.nextInt();
        }
        System.out.print("Sum: ");
        int sum = sc.nextInt();
        System.out.println(subSetSum(arr, n, sum));
        sc.close();

    }

    public static int subSetSum(int arr[], int n, int sum) {
        if (n == 0)
            return (sum == 0) ? 1 : 0;
        return (subSetSum(arr, n - 1, sum) + subSetSum(arr, n - 1, sum - arr[n - 1]));
    }

}
