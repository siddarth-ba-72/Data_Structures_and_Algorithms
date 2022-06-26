import java.util.*;

public class _12_partitions {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of the array: ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		System.out.print("Enter the elements of the array: ");
		for (int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		// * naive partition
		System.out.print("Enter pivot: ");
		int pivot = sc.nextInt();
		System.out.println("Index = " + naivePartition(arr, 0, n - 1, pivot));

		// * lomuto partition
		System.out.println("Index = " + lomutoPartition(arr, 0, n - 1));

		// * hoare partition
		System.out.println("Index = " + hoarePartition(arr, 0, n - 1));
		sc.close();

	}

	public static void swap(int a, int b) {
		int temp = a;
		a = b;
		b = temp;
	}

	// * Naive Partition
	public static int naivePartition(int arr[], int l, int h, int pivot) {
		int temp[] = new int[h - l + 1];
		int index = 0;
		for (int i = l; i <= h; i++) {
			if (arr[i] < arr[pivot]) {
				temp[index++] = arr[i];
			}
		}
		for (int i = l; i <= h; i++) {
			if (arr[i] == arr[pivot]) {
				temp[index++] = arr[i];
			}
		}
		int res = l + index - 1;
		for (int i = l; i <= h; i++) {
			if (arr[i] > arr[pivot]) {
				temp[index++] = arr[i];
			}
		}
		for (int i = l; i <= h; i++) {
			arr[i] = temp[i - l];
		}
		System.out.print("Naive Partition Array: ");
		for (int i = l; i <= h; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		return res;
	}

	// * Lomuto Partition
	public static int lomutoPartition(int arr[], int l, int h) {
		int pivot = arr[h];
		int i = l - 1;
		for (int j = l; j <= h - 1; j++) {
			if (arr[j] < pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}
		swap(arr[i + 1], arr[h]);
		// System.out.print("Lomuto Partition Array: ");
		// for (int k = l; k <= h; k++) {
		// System.out.print(arr[k] + " ");
		// }
		// System.out.println();
		return i + 1;
	}

	// * Hoare's Partition
	public static int hoarePartition(int arr[], int l, int h) {
		int pivot = arr[l];
		int i = l - 1;
		int j = h + 1;
		while (true) {
			do {
				i++;
			} while (arr[i] < pivot);
			do {
				j--;
			} while (arr[j] > pivot);
			if (i >= j)
				return j;
			swap(arr[i], arr[j]);
		}
	}

}
