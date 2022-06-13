import java.util.*;

public class _3_dq_jva {

	public static void main(String[] args) {

		Deque<Integer> dq = new LinkedList<>();

		dq.offerFirst(5);
		dq.offerFirst(4);
		dq.offerLast(3);
		dq.offerLast(6);

		System.out.println(dq);
		System.out.println(dq.peekFirst());
		System.out.println(dq.peekLast());

		dq.pollFirst();
		dq.pollLast();
		System.out.println(dq);

		// * Another set of functions
		System.out.println("------------------------");

		Deque<Integer> dq2 = new LinkedList<>();

		dq2.addFirst(9);
		dq2.addLast(8);
		dq2.addFirst(3);
		dq2.addLast(0);

		System.out.println(dq2);
		System.out.println(dq2.getFirst());
		System.out.println(dq2.getLast());

		dq2.removeFirst();
		dq2.removeLast();

		dq2.addFirst(10);
		dq2.addLast(11);

		System.out.println(dq2);

		// * Deque traversal
		// Iterator it = dq2.iterator();
		// while (it.hasNext()) {
		// System.out.print(it.next() + " ");
		// }
		// System.out.println();

		// Iterator itl = dq2.descendingIterator();
		// while (itl.hasNext()) {
		// System.out.print(itl.next() + " ");
		// }
		// System.out.println();

	}
}