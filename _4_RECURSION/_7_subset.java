import java.util.Scanner;

public class _7_subset {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();
        subSets(str, "", 0);
    }

    public static void subSets(String str, String curr, int index) {
        if (index == str.length()) {
            System.out.print(curr + " ");
            return;
        }
        subSets(str, curr, index + 1);
        subSets(str, curr + str.charAt(index), index + 1);
    }

}
