public class _7_mergeFunction {
	public static void main(String[] args) {

	}

	public static void mergeFunction(int[] arr, int low, int mid, int high) {
		int n1 = mid - low + 1;
		int n2 = high - mid;
		int left[] = new int[n1];
		int right[] = new int[n2];
		for (int i = 0; i < n1; i++) {
			left[i] = arr[low + i];
		}
		for (int i = 0; i < n1; i++) {
			right[i] = arr[mid + i + 1];
		}
	}

}
