package _11_LINKED_LIST;

class Node2 {
	int data;
	Node2 next;

	Node2(int x) {
		data = x;
		next = null;
	}
}

public class _4_llTraversal {
	public static void main(String[] args) {
		Node2 head = new Node2(10);
		head.next = new Node2(20);
		head.next.next = new Node2(30);
		head.next.next.next = new Node2(40);
		printLinkedList(head);
	}

	public static void printLinkedList(Node2 head) {
		Node2 curr = head;
		while (curr != null) {
			System.out.print(curr.data + " ");
			curr = curr.next;
		}
	}

}
