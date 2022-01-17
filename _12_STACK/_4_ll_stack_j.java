package _12_STACK;

class Node {
	int data;
	Node next;

	Node(int d) {
		data = d;
		next = null;
	}
}

class MyStack_LL {
	Node head;
	int size;

	MyStack_LL() {
		head = null;
		size = 0;
	}

	void push(int data) {
		Node newNode = new Node(data);
		newNode.next = head;
		head = newNode;
		size++;
	}

	int pop() {
		if (head == null) {
			System.out.println("Stack is empty");
			return -1;
		}
		int data = head.data;
		head = head.next;
		size--;
		return data;
	}

	int peek() {
		if (head == null) {
			System.out.println("Stack is empty");
			return -1;
		}
		return head.data;
	}

	int sizeOfStack() {
		return size;
	}

	boolean isEmpty() {
		return (size == 0);
	}

	void display() {
		if (head == null) {
			System.out.println("Stack is empty");
			return;
		}
		System.out.println("\nStack elements are: ");
		Node temp = head;
		while (temp != null) {
			System.out.println(temp.data);
			temp = temp.next;
		}
		System.out.println();
	}
}

public class _4_ll_stack_j {
	public static void main(String[] args) {

		MyStack_LL stk = new MyStack_LL();
		stk.push(10);
		stk.push(20);
		stk.push(30);
		stk.push(40);
		stk.push(50);

		stk.display();

		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Popped element is: " + stk.pop());

		stk.display();

		stk.push(60);
		stk.push(70);

		stk.display();

		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Peek: " + stk.peek());
		System.out.println("Popped element is: " + stk.pop());
		System.out.println("Peek: " + stk.peek());

		stk.display();

		stk.pop();
		stk.pop();
		stk.pop();

		stk.display();
	}
}
