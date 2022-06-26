public class _11_count_inversions {

	public static void main(String[] args) {

	}

	// * Naive solution
	int count_inv(int arr[]) {
		int res = 0;
		int n = arr.length;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] > arr[j]) {
					res++;
				}
			}
		}
		return res;
	}

	// *Optimized solution

}
