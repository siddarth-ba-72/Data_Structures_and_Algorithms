import java.util.*;

public class _4_arrdeq_jva {

	public static void main(String[] args) {

		ArrayDeque<Integer> adq = new ArrayDeque<>();

		adq.add(1);
		adq.add(2);
		adq.add(3);

		System.out.println(adq);

		System.out.println("--------------------");
		// * ArrayDeque as Stack

		ArrayDeque<Integer> adq2 = new ArrayDeque<>();

		adq2.push(10);
		adq2.push(20);
		adq2.push(30);
		adq2.push(40);

		System.out.println(adq2);

		System.out.println(adq2.peek());
		System.out.println("Popped: " + adq2.pop());
		System.out.println(adq2.peek());

		System.out.println("--------------------");
		// * ArrayDeque as Queue

		ArrayDeque<Integer> adq3 = new ArrayDeque<>();

		adq3.offer(10);
		adq3.offer(20);
		adq3.offer(30);
		adq3.offer(40);

		System.out.println(adq3);

		System.out.println(adq3.peek());
		System.out.println("Popped: " + adq3.poll());
		System.out.println(adq3.peek());

		System.out.println("--------------------");
		// * ArrayDeque as Deque

		ArrayDeque<Integer> adq4 = new ArrayDeque<>();

		adq4.offerFirst(10);
		adq4.offerLast(20);
		adq4.offerFirst(30);
		adq4.offerLast(40);

		System.out.println(adq4);

		System.out.println(adq4.peekFirst());
		System.out.println("Popped: " + adq4.pollFirst());
		System.out.println(adq4.peekLast());
		System.out.println("Popped: " + adq4.pollLast());

	}

}
