package _1_TIME_AND_SPACE_COMPLEXITY;

public class _4_commonLoops {
    public static void main(String[] args) {
        int n = 9;
        int c = 9;
        // Loop-1:
        for (int i = 0; i < n; i += c) {
            // SOME WORK
        }
        // loop runs for [n/c]+1 times
        // TC: Theta(n)

        // Loop-2:
        for (int i = n; i > 0; i -= c) {
            // SOME WORK
        }
        // Loop runs for [n/c]-1 times
        // TC: Theta(n)

        // Loop-3:
        for (int i = 1; i < n; i *= c) {
            // SOME WORK
        }
        // TC: Theta(log(n))

        // Loop-4:
        for (int i = n; i > 1; i /= c) {
            // SOME WORK
        }
        // TC: Theta(log(n))

        // Loop-5:
        for (int i = 2; i < n; i = n ^ c) {
            // SOME WORK
        }
        // TC: Theta(log(log(n)))
    }
}
