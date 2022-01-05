package _11_LINKED_LIST;

class dllNode {
	int data;
	dllNode next; // ? self-referential structure
	dllNode prev; // ? self-referential structure

	dllNode(int x) {
		data = x;
		next = null;
		prev = null;
	}
}

public class _13_doublyLinkedList {
	public static void main(String[] args) {
		dllNode head = new dllNode(10);
		dllNode t1 = new dllNode(20);
		dllNode t2 = new dllNode(30);
		head.next = t1;
		t1.prev = head;
		t1.next = t2;
		t2.prev = t1;
	}
}
