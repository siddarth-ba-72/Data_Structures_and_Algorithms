import java.util.Scanner;

public class _5_checkIfSorted {
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
        boolean ifSorted = isSorted(arr);
        System.out.print("Sorted array or Not ? :- ");
        System.out.println(ifSorted);
    }

    // Naive solution
    public static boolean isSortedNaive(int arr[]) {
        int n = arr.length;
        if (n == 1)
            return true;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[i])
                    return false;
            }
        }
        return true;
    }
    // TC: O(n^2)

    // Optimized solution
    public static boolean isSorted(int arr[]) {
        int n = arr.length;
        if (n == 1)
            return true;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1])
                return false;
        }
        return true;
    }
    // TC: O(n)
    // AS: Theta(1)

}
