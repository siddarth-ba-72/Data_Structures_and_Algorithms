package _1_TIME_AND_SPACE_COMPLEXITY;

public class _6_analysisOfRecursion {
    public static void main(String[] args) {

    }

    public static String func(int n) {
        if (n == 0)
            return "";
        System.out.println("gfg");
        return func(n / 2);
    }
    // T(n) = T(n/2) + Theta(1)
    // T(0) = Theta(1)

    public static String funcNew(int n) {
        if (n <= 0)
            return "";
        for (int i = 0; i < n; i++) {
            System.out.println("---");
        }
        return funcNew(n / 3);
    }
    // T(n) = T(n/3) + Theta(1)
    // T(0) = \Theta(1)
}
