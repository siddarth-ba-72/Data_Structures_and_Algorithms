package _3_BITWISE_OPERATOR;

import java.util.Scanner;

public class _2_bitwiseJava {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int y = sc.nextInt();

        sc.close();

        // System.out.print("x: ");
        // System.out.println(x);
        // System.out.print("y: ");
        // System.out.println(y);

        // AND OPERATOR
        // System.out.println(x & y);

        // OR OPERATOR
        // System.out.println(x | y);

        // XOR OPERATOR
        System.out.println(x ^ y);

        // NOT OPERATOR
        // System.out.println(~x);
        // System.out.println(~y);
        // O/P -> -x-1 by 2's compliment method

        // LEFT SHIFT OPERATOR
        // System.out.println(x << 1);
        // System.out.println(x << 2);
        // System.out.println(x << 3);
        // System.out.println(x << 4);
        // System.out.println(x << y);
        // System.out.println(-1 << 1);
        // x << y = x * (2 ^ y)

        // RIGHT SHIFT OPERATOR
        // System.out.println(x >> 1);
        // System.out.println(x >> 2);
        // System.out.println(x >> 3);
        // System.out.println(x >> 4);
        // System.out.println(x >> y);
        // x >> y = floor(x / (2 ^ y))

        // RIGHT SHIFT FOR NEGATIVE NUMBERS
        // RIGHT SHIFT
        // leading bits gets filled by '1'
        // -ve remains -ve
        // int a = -2;
        // System.out.println(a >> 1);
        // System.out.println(a >> 2);
        // System.out.println(a >> 3);
        // -2 >> i = -1 always
        // UNSIGNED RIGHT SHIFT
        // leading bits gets filled by '0'
        // -ve becomes +ve
        // System.out.println(a >>> 1);
    }
}
