import java.util.Scanner;
import java.util.Arrays;

public class _11_medianOfTwoSortedArrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Length of a1:- ");
        int n1 = sc.nextInt();
        System.out.print("Length of a2 (> length of a1):- ");
        int n2 = sc.nextInt();
        int a1[] = new int[n1];
        int a2[] = new int[n2];
        System.out.println("Enter elements of a1:");
        for (int i = 0; i < n1; i++) {
            System.out.printf("a1[%d] = ", i);
            a1[i] = sc.nextInt();
        }
        System.out.println();
        System.out.println("Enter elements of a2:");
        for (int i = 0; i < n2; i++) {
            System.out.printf("a2[%d] = ", i);
            a2[i] = sc.nextInt();
        }
        System.out.println();
        Arrays.sort(a1);
        Arrays.sort(a2);
        System.out.println("a1 array->");
        for (int i = 0; i < n1; i++) {
            System.out.print(a1[i] + " ");
        }
        System.out.println();
        System.out.println("a2 array->");
        for (int i = 0; i < n2; i++) {
            System.out.print(a2[i] + " ");
        }
        System.out.println();
        System.out.println("median = " + getMedian(a1, a2));
        sc.close();
    }

    public static double getMedian(int a1[], int a2[]) {
        int n1 = a1.length, n2 = a2.length;
        int begin = 0, end = n1;
        // double ans = 0;
        while (begin <= end) {
            int i1 = (begin + end) / 2;
            int i2 = ((n1 + n2 + 1) / 2) - i1;
            int min1 = (i1 == n1) ? Integer.MAX_VALUE : a1[i1];
            int max1 = (i1 == 0) ? Integer.MIN_VALUE : a1[i1 - 1];
            int min2 = (i2 == n2) ? Integer.MAX_VALUE : a2[i2];
            int max2 = (i2 == 0) ? Integer.MIN_VALUE : a2[i2 - 1];
            if ((max1 <= min2) && (max2 <= min1)) {
                if (((n1 + n2) & 1) == 0)
                    return (double) (Math.max(max1, max2) + Math.min(min1, min2)) / 2;
                else
                    return (double) (Math.max(max1, max2));
            } else if (max1 > min2)
                end = i1 - 1;
            else
                begin = i1 + 1;
        }
        return -1;
    }
    // * TC: O(log(n1))

}
