import java.util.Scanner;

public class _4_largestElement {
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
        int largest = getLargestElement(arr, n);
        int secondLargest = secondLargestElement(arr, n);
        System.out.print("Largest Element : ");
        System.out.println(largest);
        System.out.print("Second Largest Element : ");
        System.out.println(secondLargest);
    }

    // Naive solution
    public static int getLargestElementNaive(int arr[], int n) {
        n = arr.length;
        for (int i = 0; i < n; i++) {
            boolean flag = true;
            for (int j = 0; j < n; j++) {
                if (arr[j] > arr[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                return i;
            }
        }
        return -1;
    }

    // Optimized solution
    public static int getLargestElement(int arr[], int n) {
        n = arr.length;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[res]) {
                res = i;
            }
        }
        return arr[res];
    }

    // SECOND LARGEST ELEMENT

    // Naive solution
    public static int secondLargestNaive(int arr[], int n) {
        n = arr.length;
        int largest = getLargestElement(arr, n);
        int res = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != largest) {
                if (res == -1)
                    res = i;
                else if (arr[i] > arr[res])
                    res = i;
            }
        }
        return arr[res];
    }

    // Optimized solution
    public static int secondLargestElement(int arr[], int n) {
        n = arr.length;
        int res = -1;
        int largest = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[largest]) {
                res = largest;
                largest = i;
            } else if (res == -1 || arr[i] > arr[res])
                res = i;
        }
        return arr[res];
    }
    // TC: Theta(n)
    // AS: Theta(1)

}
