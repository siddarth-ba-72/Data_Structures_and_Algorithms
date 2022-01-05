public class _7_searchInInfiniteArray {
    public static void main(String[] args) {

    }

    // * Naive solution
    public static int findKNaive(int arr[], int k) {
        int i = 0;
        while (true) {
            if (arr[i] == k)
                return i;
            if (arr[i] > k)
                return -1;
            i++;
        }
    }
    // * TC: O(n)
    // * AS: O(1)

    // * Optimized solution
    // * UNBOUNDED BINARY SEARCH
    public static int findK(int arr[], int k) {
        // ! Using binary search is not possible because high will go upto infinity
        if (arr[0] == k)
            return 0;
        int i = 1;
        while (arr[i] < k) {
            i = i * 2;
            if (arr[i] == k)
                return i;
        }
        return binarySearchRecursive(arr, (i / 2) + 1, i - 1, k);
    }
    // * TC: O(log(n))

    // * Binary Search
    public static int binarySearchRecursive(int arr[], int low, int high, int k) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
                return mid;
            if (arr[mid] < k)
                return binarySearchRecursive(arr, mid + 1, high, k);
            if (arr[mid] > k)
                return binarySearchRecursive(arr, low, mid - 1, k);
        }
        return -1;
    }

}
