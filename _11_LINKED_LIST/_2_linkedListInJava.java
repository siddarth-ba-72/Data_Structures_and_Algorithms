package _11_LINKED_LIST;

class Node {
	int data;
	Node next; // ? self-referential structure

	Node(int x) {
		data = x;
		next = null;
	}
}

public class _2_linkedListInJava {
	public static void main(String[] args) {
		Node head = new Node(1);
		Node temp1 = new Node(1);
		Node temp2 = new Node(1);
		head.next = temp1;
		temp1.next = temp2;
	}

}
