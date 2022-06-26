import java.util.*;

public class _10_union_two_sorted_arrs {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the size of the first array: ");
		int n1 = sc.nextInt();
		int arr1[] = new int[n1];
		System.out.print("Enter the elements of the first array: ");
		for (int i = 0; i < n1; i++) {
			arr1[i] = sc.nextInt();
		}
		System.out.print("Enter the size of the second array: ");
		int n2 = sc.nextInt();
		int arr2[] = new int[n2];
		System.out.print("Enter the elements of the second array: ");
		for (int i = 0; i < n2; i++) {
			arr2[i] = sc.nextInt();
		}
		System.out.println("Intersection of the two arrays: ");
		union_sorted(arr1, arr2);
		sc.close();

	}

	// * Naive solution
	public static void union(int a[], int b[]) {
		int m = a.length;
		int n = b.length;
		int c[] = new int[m + n];
		for (int i = 0; i < m; i++) {
			c[i] = a[i];
		}
		for (int i = 0; i < n; i++) {
			c[m + i] = b[i];
		}
		Arrays.sort(c);
		for (int i = 0; i < c.length; i++) {
			if (i == 0 || c[i] != c[i - 1])
				System.out.print(c[i] + " ");
		}
	}
	// * TC: O(mn)

	// * Optimized solution
	public static void union_sorted(int a[], int b[]) {
		int m = a.length;
		int n = b.length;
		int i = 0, j = 0;
		while (i < m && j < n) {
			if (i > 0 && a[i] == a[i - 1]) {
				i++;
				continue;
			}
			if (j > 0 && b[j] == b[j - 1]) {
				j++;
				continue;
			}
			if (a[i] < b[j]) {
				System.out.print(a[i] + " ");
				i++;
			} else if (a[i] > b[j]) {
				System.out.print(b[j] + " ");
				j++;
			} else {
				System.out.print(a[i] + " ");
				i++;
				j++;
			}
		}
		while (i < m) {
			if (i > 0 && a[i] == a[i - 1]) {
				i++;
				continue;
			}
			System.out.print(a[i] + " ");
			i++;
		}
		while (j < n) {
			if (j > 0 && b[j] == b[j - 1]) {
				j++;
				continue;
			}
			System.out.print(b[j] + " ");
			j++;
		}
	}
	// * TC: O(m+n)
	// * AS: O(1)

}
