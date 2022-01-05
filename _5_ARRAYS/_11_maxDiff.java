public class _11_maxDiff {
    public static void main(String[] args) {

    }

    // Naive solution
    public static int maxDiffNaive(int arr[]) {
        int n = arr.length;
        int res = arr[1] - arr[0];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                res = Math.max(res, (arr[j] - arr[i]));
            }
        }
        return res;
    }
    // TC: Theta(n^2)

    // Optimized solution
    public static int maxDiff(int arr[]) {
        int n = arr.length;
        int res = arr[1] - arr[0];
        int minVal = arr[0];
        for (int j = 1; j < n; j++) {
            res = Math.max(res, (arr[j] - minVal));
            minVal = Math.min(minVal, arr[j]);
        }
        return n;
    }
    // TC: Theta(n)

}
