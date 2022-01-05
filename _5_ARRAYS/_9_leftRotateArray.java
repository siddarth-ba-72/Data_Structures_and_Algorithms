import java.util.Scanner;

public class _9_leftRotateArray {
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
        leftRotateArraybyOne(arr);
        System.out.println();
        System.out.println("Rotate by one element: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        int d = sc.nextInt();
        leftRotateArrByDTwo(arr, d);
        System.out.println("Rotate by d elements: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }

    // Left Rotate Array by One Element
    public static void leftRotateArraybyOne(int arr[]) {
        int n = arr.length;
        int temp = arr[0];
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }

    // Left Rotate Array by d Element

    // solution-1:
    public static void leftRotateArrByDOne(int arr[], int d) {
        for (int i = 0; i < d; i++) {
            leftRotateArraybyOne(arr);
        }
    }
    // TC: Theta(n*d)
    // AS: Theta(1)

    // solution-2:
    public static void leftRotateArrByDTwo(int arr[], int d) {
        int n = arr.length;
        int temp[] = new int[n];
        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
    // TC: Theta(n)
    // AS: Theta(d)

    // solution-3:
    public static void leftRotateArrByDThree(int arr[], int d) {
        int n = arr.length;
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
    }
    // TC: Theta(n)
    // AS: Theta(1)

    // Reversing function
    public static void reverse(int arr[], int low, int high) {
        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    // Swapping function
    public static void swap(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
    }

}
