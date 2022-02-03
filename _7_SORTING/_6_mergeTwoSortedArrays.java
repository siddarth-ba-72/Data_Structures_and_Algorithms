import java.util.Arrays;
import java.util.Scanner;

public class _6_mergeTwoSortedArrays {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Size of the Array 1 : ");
		int n = sc.nextInt();
		int a[] = new int[n];
		System.out.println("Insert Array Elements of a:- ");
		for (int i = 0; i < n; i++) {
			System.out.printf("arr[%d] : ", i);
			a[i] = sc.nextInt();
		}
		Arrays.sort(a);
		System.out.print("Size of the Array 2 : ");
		int m = sc.nextInt();
		int b[] = new int[n];
		System.out.println("Insert Array Elements of b:- ");
		for (int i = 0; i < m; i++) {
			System.out.printf("arr[%d] : ", i);
			b[i] = sc.nextInt();
		}
		Arrays.sort(b);
		sc.close();
		mergeTwoSortedArrays(a, b);
	}

	// ? DIVIDE AND CONQUER ALGORITHM

	// * Naive solution
	// * Takes two sorted arrays as input
	public static void mergeTwoSortedArraysNaive(int[] a, int[] b) {
		int n = a.length;
		int m = b.length;
		int[] c = new int[n + m];
		for (int i = 0; i < m; i++) {
			c[i] = a[i];
		}
		for (int i = 0; i < n; i++) {
			c[m + i] = b[i];
		}
		Arrays.sort(c);
		for (int i = 0; i < (n + m); i++) {
			System.out.print(c[i] + " ");
		}
	}

	// * Optimized solution
	public static void mergeTwoSortedArrays(int a[], int[] b) {
		int m = a.length;
		int n = b.length;
		int i = 0;
		int j = 0;
		while (i < m && j < n) {
			if (a[i] <= b[j]) {
				System.out.print(a[i] + " ");
				i++;
			} else {
				System.out.print(b[j] + " ");
				j++;
			}
		}
		while (i < m) {
			System.out.print(a[i] + " ");
			i++;
		}
		while (j < n) {
			System.out.print(b[j] + " ");
			j++;
		}
	}
	// * TC: Theta(m + n)
	// * AS: O(1)
}
