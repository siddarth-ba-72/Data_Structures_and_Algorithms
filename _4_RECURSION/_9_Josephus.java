import java.util.Scanner;

public class _9_Josephus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n: ");
        int n = sc.nextInt();
        System.out.print("k: ");
        int k = sc.nextInt();
        System.out.println(Josephus(n, k)); // indexing from 0 to n-1
        // System.out.println(myJosephus(n, k)); // indexing from 1 to n
        sc.close();
    }

    // indexing from 0 to n-1
    public static int Josephus(int n, int k) {
        if (n == 1)
            return 0;
        return ((Josephus(n - 1, k) + k) % n);
    }
    // TC: Theta(n)

    // indexing from 1 to n
    public static int myJosephus(int n, int k) {
        return Josephus(n, k) + 1;
    }

}
