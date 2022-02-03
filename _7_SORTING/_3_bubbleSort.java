import java.util.Scanner;

public class _3_bubbleSort {
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
		bubbleSort(arr);
		System.out.println("Original Sorted Array: ");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		sc.close();
	}

	// * Naive solution
	public static void bubbleSortNaive(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					// ? swapping
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	// * Optimized solution
	// * BUBBLE SORT ALGORITHM
	// * STABLE SORTING ALGORITHM
	public static void bubbleSort(int arr[]) {
		int n = arr.length;
		boolean swapped;
		for (int i = 0; i < n; i++) {
			swapped = false;
			for (int j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					// ? swapping
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					swapped = true;
				}
			}
			if (swapped == false)
				break;
		}
	}
	// * TC: O(n^2)

}
