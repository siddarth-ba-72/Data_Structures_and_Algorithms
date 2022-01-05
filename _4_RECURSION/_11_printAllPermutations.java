public class _11_printAllPermutations {
    public static void main(String[] args) {

    }

    public static void printAllPermutations(String str, int i) {
        i = 0;
        if (i == str.length() - 1) {
            System.out.println(str + " ");
            return;
        }
        for (int j = i; j < str.length(); j++) {
            swap(str, i, j);
            printAllPermutations(str, i + 1);
            swap(str, j, i);
        }
    }

    // function to swap the charecters of the string
    public static char[] swap(String str, int i, int j) {
        char ch[] = str.toCharArray();
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        return ch;
    }

}
