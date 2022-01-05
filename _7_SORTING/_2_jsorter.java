import java.util.ArrayList;
import java.util.Collections;
import java.util.Arrays;
import java.util.List;

class Point implements Comparable<Point> {
    int x, y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // compareTo() function defining the
    // nature of sorting i.e., according to
    // x-coordinate
    public int compareTo(Point P) {
        return this.x - P.x;
    }
}

public class _2_jsorter {
    public static void main(String[] args) {

        // * Arrays.sort()
        int arr1[] = { 5, 3, 9, 7 };
        int arr2[] = { 'A', 'D', 'C', 'E', 'B' };

        Arrays.sort(arr1);
        System.out.println(Arrays.toString(arr1));
        Arrays.sort(arr2);
        System.out.println(Arrays.toString(arr2));

        Arrays.sort(arr1, 1, 3); // sorts from 1 to 3-1

        Point arr[] = { new Point(10, 20), new Point(2, 5), new Point(8, 6) };
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i].x + " " + arr[i].y);
        }

        // * Collections.sort()
        List<Integer> list = new ArrayList<Integer>();
        list.add(7);
        list.add(6);
        list.add(9);
        list.add(5);

        Collections.sort(list);
        System.out.println(list);
        Collections.sort(list, Collections.reverseOrder());
        System.out.println(list);

        List<Point> arrlist = new ArrayList<Point>();
        arrlist.add(new Point(5, 10));
        arrlist.add(new Point(2, 20));
        arrlist.add(new Point(10, 30));

        // List is sorted in the natural order
        Collections.sort(arrlist);

        // Displaying the points
        for (Point p : arrlist)
            System.out.println(p.x + " " + p.y);

    }
}
