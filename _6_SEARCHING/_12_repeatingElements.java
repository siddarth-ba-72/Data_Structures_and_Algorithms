import java.util.Scanner;

public class _12_repeatingElements {
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
        System.out.println("Repeating element = " + findRepeatingElements(arr));
        sc.close();
    }

    public static int findRepeatingElements(int arr[]) {
        int slow = arr[0], fast = arr[0];
        int n = arr.length;
        do {
            slow = arr[slow % n];
            fast = arr[arr[fast % n] % n];
        } while (slow != fast);
        slow = arr[0] + 1;
        while (slow != fast) {
            fast = arr[fast % n];
            slow = arr[slow % n];
        }
        return slow;
    }

}
