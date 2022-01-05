import java.util.Scanner;
import java.util.Arrays;

public class _12_frequencyOfSortedArray {
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
        System.out.println("Frequency: ");
        Arrays.sort(arr);
        printFrequency(arr);

    }

    public static void printFrequency(int arr[]) {
        int n = arr.length;
        int freq = 1;
        int i = 1;
        while (i < n) {
            while ((i < n) && (arr[i] == arr[i - 1])) {
                freq++;
                i++;
            }
            System.out.println(arr[i - 1] + " " + freq);
            i++;
            freq = 1;
        }
        if ((n == 1) || (arr[n - 1] != arr[n - 2])) {
            System.out.println(arr[i - 1] + " " + 1);
        }
    }
    // TC: Theta(n)

}
