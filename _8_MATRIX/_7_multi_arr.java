package _8_MATRIX;

public class _7_multi_arr {

	// ? Passing 2-D array as parameter
	public static void printer(int array[][]) {
		for (int i = 0; i < array.length; i++) {
			for (int j = 0; j < array[i].length; j++) {
				System.out.print(array[i][j] + " ");
			}
			System.out.println();
		}
	}

	
	public static void main(String[] args) {

		int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		for (int i = 0; i < arr.length; i++) {
			for (int j = 0; j < arr[i].length; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}

		int m = 3;
		int n = 2;
		int brr[][] = new int[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				brr[i][j] = i + j;
				System.out.print(brr[i][j] + " ");
			}
			System.out.println();
		}

		int crr[][] = new int[m][];
		for (int i = 0; i < m; i++) {
			crr[i] = new int[i + 1];
			for (int j = 0; j < crr[i].length; j++) {
				crr[i][j] = i + j;
				System.out.print(crr[i][j] + " ");
			}
			System.out.println();
		}

	}
}