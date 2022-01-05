import java.util.Scanner;

public class _8_towerOfHanoi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        TowerOfHanoi(k, 'A', 'B', 'C');
        sc.close();
    }

    public static void TowerOfHanoi(int n, char A, char B, char C) {
        if (n == 1) {
            System.out.println("Move 1 from " + A + " to " + C);
            return;
        }
        TowerOfHanoi(n - 1, A, C, B);
        System.out.println("Move " + n + " from " + A + " to " + C);
        TowerOfHanoi(n - 1, B, A, C);
    }
}
