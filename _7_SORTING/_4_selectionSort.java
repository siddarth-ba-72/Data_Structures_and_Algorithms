import java.util.Scanner;

// ! UNSTABLE SORTING ALGORITHM

public class _4_selectionSort {
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
		selectionSort(arr);
		System.out.println("Original Sorted Array: ");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		sc.close();
	}

	// * Naive solution
	public static void selectionSortNaive(int arr[]) {
		int n = arr.length;
		int temp[] = new int[n];
		for (int i = 0; i < n; i++) {
			int min_ind = 0;
			for (int j = 1; j < n; j++) {
				if (arr[j] < arr[min_ind]) {
					min_ind = j;
				}
				temp[i] = arr[min_ind];
				arr[min_ind] = Integer.MAX_VALUE;
			}
		}
		for (int i = 0; i < n; i++) {
			arr[i] = temp[i];
		}
	}
	// * AS: O(n)

	// * Optimized solution
	public static void selectionSort(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n - 1; i++) {
			int min_ind = i;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[min_ind])
					min_ind = j;
			}
			int temp = arr[i];
			arr[i] = arr[min_ind];
			arr[min_ind] = temp;
		}
	}
	// * TC: Theta(n^2)

}
