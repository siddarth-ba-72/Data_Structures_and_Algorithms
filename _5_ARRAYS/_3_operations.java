public class _3_operations {
    public static void main(String[] args) {

    }

    public static int insert(int arr[], int n, int x, int cap, int pos) {
        if (n == cap)
            return n;
        int index = pos - 1;
        for (int i = n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = x;
        return (n + 1);
    }
    // ? TC: O(n)

    public static int delete(int arr[], int n, int x) {
        int i = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] == x)
                break;
        }
        if (i == n)
            return n;
        for (int j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        return (n - 1);
    }

}
