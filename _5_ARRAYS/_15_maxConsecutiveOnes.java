import java.util.Scanner;

public class _15_maxConsecutiveOnes {
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
        int k = maxConsecutiveOnes(arr);
        System.out.println(k);
    }

    // Naive solution
    public static int maxContiguousOnesNaive(int arr[]) {
        int n = arr.length;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int cur = 0;
            for (int j = i; j < n; j++) {
                if (arr[j] == 1)
                    cur++;
                else
                    break;
            }
            res = Math.max(cur, res);
        }
        return res;
    }
    // TC: Theta(nlog(n))

    // Optimized solution
    public static int maxConsecutiveOnes(int arr[]) {
        int n = arr.length;
        int res = 0, curr = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                curr = 0;
            else {
                curr++;
                res = Math.max(curr, res);
            }
        }
        return res;
    }

}
