import java.util.HashSet;
import java.util.Iterator;

public class _5_HashSet {
    public static void main(String[] args) {
        HashSet<String> hs = new HashSet<String>();

        hs.add("gfg");
        hs.add("ml");
        hs.add("ide");

        System.out.println(hs);
        System.out.println(hs.contains("ide"));

        Iterator<String> it = hs.iterator();
        while (it.hasNext())
            System.out.print(it.next() + " ");
        System.out.println();

        System.out.println("Size = " + hs.size());
        hs.remove("ide");
        System.out.println("Size = " + hs.size());

        for (String str : hs)
            System.out.print(str + " ");
        System.out.println();
        System.out.println(hs.isEmpty());
    }
}