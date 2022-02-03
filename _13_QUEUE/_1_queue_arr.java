package _13_QUEUE;

class Queue_ARR {
	int size, capacity;
	int front, rear;
	int[] arr;

	public Queue_ARR(int capacity) {
		this.capacity = capacity;
		front = this.size = 0;
		rear = capacity - 1;
		arr = new int[this.capacity];
	}

	boolean isFull(Queue_ARR qu) {
		return (qu.size == qu.capacity);
	}

	boolean isEmpty(Queue_ARR qu) {
		return (qu.size == 0);
	}

	void enqueue(int x) {
		if (isFull(this)) {
			System.out.println("Queue is full");
			return;
		}
		this.rear = (this.rear + 1) % this.capacity;
		this.arr[this.rear] = x;
		this.size++;
		System.out.println("Element " + x + " is inserted");
	}

	int dequeue() {
		if (isEmpty(this)) {
			System.out.println("Queue is empty");
			return -1;
		}
		int x = this.arr[this.front];
		this.front = (this.front + 1) % this.capacity;
		this.size--;
		System.out.println("Element " + x + " is deleted");
		return x;
	}

	int getFront() {
		if (isEmpty(this)) {
			System.out.println("Queue is empty");
			return -1;
		}
		return this.arr[this.front];
	}

	int getRear() {
		if (isEmpty(this)) {
			System.out.println("Queue is empty");
			return -1;
		}
		return this.arr[this.rear];
	}

	void display() {
		if (isEmpty(this)) {
			System.out.println("Queue is empty");
			return;
		}
		System.out.print("Queue is: ");
		for (int i = this.front; i != this.rear; i = (i + 1) % this.capacity) {
			System.out.print(this.arr[i] + " ");
		}
		System.out.println(this.arr[this.rear]);
	}
}

public class _1_queue_arr {
	public static void main(String[] args) {
		Queue_ARR qu = new Queue_ARR(5);
		qu.enqueue(10);
		qu.enqueue(20);
		qu.enqueue(30);
		qu.enqueue(40);
		qu.enqueue(50);
		qu.display();
		qu.dequeue();
		qu.display();
		System.out.println("Front element is: " + qu.getFront());
		System.out.println("Rear element is: " + qu.getRear());
	}
}
