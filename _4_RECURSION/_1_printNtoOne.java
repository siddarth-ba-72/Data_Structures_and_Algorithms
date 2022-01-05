import java.util.Scanner;

public class _1_printNtoOne {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        sc.close();
        printNtoOne(k);
    }

    // * TAIL RECURSION
    public static void printNtoOne(int n) {
        if (n == 0)
            return;
        System.out.println(n);
        printNtoOne(n - 1);
    }

}
