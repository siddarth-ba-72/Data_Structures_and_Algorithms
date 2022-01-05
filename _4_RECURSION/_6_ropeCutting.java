import java.util.Scanner;

public class _6_ropeCutting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        System.out.println(getMaxPieces(k, a, b, c));
        sc.close();
    }

    public static int getMaxPieces(int n, int a, int b, int c) {
        if (n == 0)
            return 0;
        if (n < 0)
            return -1;
        int res = Math.max(getMaxPieces(n - a, a, b, c),
                Math.max(getMaxPieces(n - b, a, b, c), getMaxPieces(n - c, a, b, c)));
        if (res == -1)
            return -1;
        return res + 1;
    }
    // TC: Theta(3^n)
    // We do have a better soln than this in DP

}
