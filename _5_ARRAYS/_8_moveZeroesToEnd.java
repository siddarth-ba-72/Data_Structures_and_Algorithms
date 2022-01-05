import java.util.Scanner;

public class _8_moveZeroesToEnd {
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
        System.out.println("Original Array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        moveZeroesToEnd(arr);
        System.out.println();
        System.out.println("After moving all 0's to the end: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    // Swapping function
    public static void swap(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Naive solution
    public static void moveToEnd(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[0] == 0) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] != 0) {
                        swap(arr[j], arr[j]);
                    }
                }
            }
        }
    }
    // TC: Theta(n^2)

    // Optimized solution
    public static void moveZeroesToEnd(int arr[]) {
        int n = arr.length;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[count]);
                count++;
            }
        }
        // TC: O(n)
    }

}
