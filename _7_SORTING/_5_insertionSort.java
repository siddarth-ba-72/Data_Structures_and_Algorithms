import java.util.Scanner;

public class _5_insertionSort {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Size of the Array : ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Insert Array Elements here:- ");
		for (int i = 0; i < n; i++) {
			System.out.printf("arr[%d] : ", i);
			arr[i] = sc.nextInt();
		}
		System.out.println("Original Array: ");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		insertionSort(arr);
		System.out.println("Original Sorted Array: ");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		sc.close();
	}

	// * INSERTION SORT ALGORITHM
	// * IN-PALCE AND STABLE SORTING ALGORITHM
	public static void insertionSort(int[] arr) {
		int n = arr.length;
		for (int i = 1; i < n; i++) {
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}
	// * TC: Theta(n) -> Best case : array is already sorted
	// * TC: Theta(n^2) -> Worst case : array is reverse sorted
	// * TC: O(n^2)

	public static void swap(int a, int b) {
		int temp = a;
		a = b;
		b = temp;
	}

}
