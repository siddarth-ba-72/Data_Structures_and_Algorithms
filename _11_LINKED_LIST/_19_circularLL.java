package _11_LINKED_LIST;

class cllNode {
	int data;
	cllNode next; // ? self-referential structure

	cllNode(int x) {
		data = x;
		next = null;
	}
}

public class _19_circularLL {
	public static void main(String[] args) {
		cllNode head = new cllNode(10);
		head.next = new cllNode(20);
		head.next.next = new cllNode(30);
		head.next.next.next = new cllNode(40);
		head.next.next.next.next = new cllNode(50);
		head.next.next.next.next.next = head;
		// printcll(head);
		printcll2(head);
	}

	// For loop:
	public static void printcll(cllNode head) {
		if (head == null)
			return;
		System.out.print(head.data + " ");
		for (cllNode r = head.next; r != head; r = r.next)
			System.out.print(r.data + " ");
	}

	// Do while loop:
	public static void printcll2(cllNode head) {
		if (head == null)
			return;
		cllNode r = head;
		do {
			System.out.print(r.data + " ");
			r = r.next;
		} while (r != head);
	}

}
