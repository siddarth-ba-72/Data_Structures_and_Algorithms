package _12_STACK;

import java.util.ArrayDeque;

public class _6_stk_coll_j {
	public static void main(String[] args) {

		ArrayDeque<Integer> stk = new ArrayDeque<Integer>();

		stk.push(10);
		stk.push(20);
		stk.push(30);
		stk.push(40);

		System.out.println("Stack: " + stk);

		System.out.println("Top element: " + stk.peek());

		System.out.println("Pop element: " + stk.pop());
		System.out.println("Pop element: " + stk.pop());
		System.out.println("Pop element: " + stk.pop());

		System.out.println("Stack: " + stk);

		System.out.println("Top element: " + stk.peek());

		System.out.println("Size: " + stk.size());
		System.out.println(stk.isEmpty());

	}
}
