import java.util.*;

public class _9_intersection_two_sorted_arrs {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of the first array: ");
		int n1 = sc.nextInt();
		int arr1[] = new int[n1];
		System.out.println("Enter the elements of the first array: ");
		for (int i = 0; i < n1; i++) {
			System.out.printf("arr1[%d] : ", i);
			arr1[i] = sc.nextInt();
		}
		System.out.print("Enter the size of the second array: ");
		int n2 = sc.nextInt();
		int arr2[] = new int[n2];
		System.out.println("Enter the elements of the second array: ");
		for (int i = 0; i < n2; i++) {
			System.out.printf("arr2[%d] : ", i);
			arr2[i] = sc.nextInt();
		}
		System.out.println("Intersection of the two arrays: ");
		intersection(arr1, arr2);
		sc.close();

	}

	// * Naive solution
	void intersec(int a[], int b[]) {
		int m = a.length;
		int n = b.length;
		for (int i = 0; i < m; i++) {
			if (i > 0 && a[i] == a[i - 1])
				continue;
			for (int j = 0; j < n; j++) {
				if (a[i] == b[j]) {
					System.out.println(a[i]);
				}
			}
		}
	}
	// * TC: O(mn)

	// * Optimized solution
	public static void intersection(int a[], int b[]) {
		int m = a.length;
		int n = b.length;
		int i = 0, j = 0;
		while (i < m && j < n) {
			if (i > 0 && a[i] == a[i - 1]) {
				i++;
				continue;
			}
			if (a[i] < b[j])
				i++;
			else if (a[i] > b[j])
				j++;
			else {
				System.out.print(a[i] + " ");
				i++;
				j++;
			}
		}
	}
	// * TC: O(m+n)
	// * AS: O(1)

}
