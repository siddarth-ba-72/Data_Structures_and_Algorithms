import java.util.Scanner;

public class _10_Leaders {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Size of the Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.print("Insert Array Elements here:- ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Original Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        leader(arr);
        System.out.println("Leaders: ");
        sc.close();
    }

    // Naive solution
    public static void leadersNaive(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            boolean flag = false;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j]) {
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                System.out.print(arr[i] + " ");
            }
        }
    }
    // TC: Theta(n^2)

    // Optimized solution
    public static void leader(int arr[]) {
        int n = arr.length;
        int curr_ldr = arr[n - 1];
        System.out.print(curr_ldr + " ");
        for (int i = n - 2; i >= 0; i--) {
            if (curr_ldr < arr[i]) {
                curr_ldr = arr[i];
                System.out.print(curr_ldr + " ");
            }
        }
    }
    // TC: Theta(n)

}
