import java.util.Scanner;

public class _6_squareRoot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int k = sc.nextInt();
        // int sqrt = sqrtFloorNaive(k);
        int sqrt = sqrtValue(k);
        System.out.printf("sqrt = %d", sqrt);
        sc.close();
    }

    // ! NO USING BUILT-IN SQRT FUNCTION

    // * Naive solution
    public static int sqrtFloorNaive(int n) {
        int i = 1;
        while (i * i <= n)
            i++;
        return i - 1;
    }
    // * TC: O(sqrt(n))

    // * Optimized solution
    public static int sqrtValue(int n) {
        int low = 1;
        int high = n;
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int msq = mid * mid;
            if (msq == n)
                return mid;
            else if (msq > n)
                high = mid - 1;
            else {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }

}
