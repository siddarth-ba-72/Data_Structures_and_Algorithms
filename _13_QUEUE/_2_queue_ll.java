package _13_QUEUE;

class Node {
	int key;
	Node next;

	public Node(int key) {
		this.key = key;
		this.next = null;
	}
}

class Queue_LL {
	Node front, rear;

	public Queue_LL() {
		this.front = this.rear = null;
	}

	void enqueue(int key) {
		Node temp = new Node(key);
		if (this.rear == null) {
			this.front = this.rear = temp;
			return;
		}
		this.rear.next = temp;
		this.rear = temp;
	}

	int dequeue() {
		if (this.front == null)
			return -1;
		Node temp = this.front;
		this.front = this.front.next;
		if (this.front == null)
			this.rear = null;
		return temp.key;
	}

	int getRear() {
		if (this.rear == null)
			return -1;
		return this.rear.key;
	}

	int getFront() {
		if (this.front == null)
			return -1;
		return this.front.key;
	}

	void printQueue() {
		Node temp = this.front;
		while (temp != null) {
			System.out.print(temp.key + " ");
			temp = temp.next;
		}
		System.out.println();
	}
}

public class _2_queue_ll {
	public static void main(String[] args) {
		Queue_LL qu = new Queue_LL();
		qu.enqueue(10);
		qu.enqueue(20);
		qu.enqueue(30);
		System.out.println(qu.dequeue());

		qu.printQueue();
		System.out.println(qu.getFront());
		System.out.println(qu.getRear());
	}
}
