import java.util.HashMap;
import java.util.Map;

public class _6_HashMap {
    public static void main(String[] args) {
        HashMap<String, Integer> hm = new HashMap<String, Integer>();

        hm.put("A", 1);
        hm.put("B", 2);
        hm.put("C", 3);
        hm.put("D", 4);

        System.out.println(hm);
        System.out.println("Size: " + hm.size());

        for (Map.Entry<String, Integer> e : hm.entrySet())
            System.out.println("Key: " + e.getKey() + " ==> Value: " + e.getValue());

        if (hm.containsKey("C"))
            System.out.println("Yes");
        else
            System.err.println("No");

        hm.remove("D");
        System.out.println("Size: " + hm.size());

        if (hm.containsValue(2))
            System.out.println("Yes");
        else
            System.err.println("No");

        System.out.println(hm.get("A"));
        System.out.println(hm.get("IDE"));
    }
}
