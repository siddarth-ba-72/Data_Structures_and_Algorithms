package _1_TIME_AND_SPACE_COMPLEXITY;

public class _5_multipleLoops {
    public static void main(String[] args) {
        int n = 9;
        int m = 9;

        // Loop-1:
        // Subsequent Loops: whenever there r subsequent loops we just add the all TC's
        // and ignore the lowest order term

        // Loop-2:
        // Nested loops
        for (int i = 0; i < n; i++) { // -> Theta(n)
            for (int j = 1; j < n; j *= 2) { // -> Theta(log(n))
                // SOME WORK
            }
        }
        // Total TC: Theta(nlog(n))

        // Loop-3:
        // Mixed loops
        for (int i = 0; i < n; i++) { // -> Theta(n)
            for (int j = 1; j < n; j *= 2) { // -> Theta(log(n))
                // SOME WORK
            }
        }
        for (int i = 0; i < n; i++) { // -> Theta(n)
            for (int j = 1; j < n; j++) { // -> Theta(n)
                // SOME WORK
            }
        }
        // Total TC: Theta(n*n)

        // Loop-5:
        // Different inputs
        for (int i = 0; i < n; i++) { // -> Theta(n)
            for (int j = 1; j < n; j *= 2) { // -> Theta(log(n))
                // SOME WORK
            }
        }
        for (int i = 0; i < m; i++) { // -> Theta(m)
            for (int j = 1; j < m; j++) { // -> Theta(m)
                // SOME WORK
            }
        }
        // Theta(nlog(n)) and Theta(m*m)
        // Total TC: Theta(nlog(n) + m*m)

    }
}
