import java.util.Scanner;

public class _3_sumOfFirstN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        System.out.println(getSum(k));
        sc.close();
    }

    public static int getSum(int n) {
        if (n == 0)
            return 0;
        return n + getSum(n - 1);
    }

}
