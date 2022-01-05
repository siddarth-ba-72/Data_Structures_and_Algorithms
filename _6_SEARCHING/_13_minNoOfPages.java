import java.util.Scanner;

public class _13_minNoOfPages {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("n:- ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Enter elements (no 0's allowed): ");
		for (int i = 0; i < n; i++) {
			System.out.printf("arr[%d] = ", i);
			arr[i] = sc.nextInt();
		}
		System.out.println();
		System.out.println("array->");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
		sc.close();
	}

	// * Naive solution Recursive
	public static int minPgs(int arr[], int n, int k) {
		n = arr.length;
		if (k == 1)
			return sumfromAtoB(arr, 0, n - 1);
		if (n == 1)
			return arr[0];
		int res = Integer.MAX_VALUE;
		for (int i = 1; i < n; i++) {
			res = Math.min(res, Math.max(minPgs(arr, i, k - 1), sumfromAtoB(arr, i, n - 1)));
		}
		return res;
	}
	// * TC: O(e^n)

	// * Sum of array from i to j
	public static int sumfromAtoB(int arr[], int a, int b) {
		int sum = 0;
		for (int i = a; i <= b; i++)
			sum += arr[i];
		return sum;
	}

}
